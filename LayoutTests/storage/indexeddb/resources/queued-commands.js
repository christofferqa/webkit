if (this.importScripts) {
    importScripts('../../../fast/js/resources/js-test-pre.js');
    importScripts('shared.js');
}

description("Verify that queuing up several commands works (and they all fire).");

function test()
{
    removeVendorPrefixes();
    request = evalAndLog("indexedDB.open('queued-commands')");
    request.onsuccess = setVersion;
    request.onerror = unexpectedErrorCallback;
}

function setVersion()
{
    db = evalAndLog("db = event.target.result");

    request = evalAndLog("db.setVersion('new version')");
    request.onsuccess = deleteExisting;
    request.onerror = unexpectedErrorCallback;
}

function deleteExisting()
{
    debug("setVersionSuccess():");
    self.trans = evalAndLog("trans = event.target.result");
    shouldBeTrue("trans !== null");
    trans.onabort = unexpectedAbortCallback;

    deleteAllObjectStores(db);

    self.store = evalAndLog("db.createObjectStore('storeName')");
    self.indexObject = evalAndLog("store.createIndex('indexName', 'x')");

    request = evalAndLog("store.add({x: 'value', y: 'zzz'}, 'key')");
    request.onsuccess = function() { verifyAdd(0); };
    request.onerror = unexpectedErrorCallback;

    request = evalAndLog("store.add({x: 'value2', y: 'zzz2'}, 'key2')");
    request.onsuccess = function() { verifyAdd(1); };
    request.onerror = unexpectedErrorCallback;

    request = evalAndLog("store.put({x: 'valu2', y: 'zz2'}, 'ky2')");
    request.onsuccess = function() { verifyAdd(2); };
    request.onerror = unexpectedErrorCallback;

    self.addCount = 0;
}

function verifyAdd(expected)
{
    shouldBe("" + addCount++, "" + expected);

    if (addCount == 3)
        finishJSTest();
    if (addCount > 3)
        testFailed("Unexpected call to verifyAdd!");
}

test();