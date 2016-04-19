#!/bin/bash

SITE=$1
shift

ROBOT_TIMEOUT="15"
ROBOT_EXTRA_TIME="5"

while [ $# -gt 0 ]; do
    case "$1" in
        --h)
            echo "Usage: ./auto_explore_site.sh [--robot-timeout=<num>] [--robot-extra-time=<num>]"
            exit 0
            ;;
        --robot-timeout=*)
            ROBOT_TIMEOUT="${1#*=}"
            ;;
        --robot-extra-time=*)
            ROBOT_EXTRA_TIME="${1#*=}"
            ;;
        *)
            echo "Error: Invalid argument: $1."
            exit 1
    esac
    shift
done

echo $SITE > /tmp/url_file
WebKitBuild/Release/bin/QtTestBrowser -r /tmp/url_file \
       -robot-timeout $ROBOT_TIMEOUT -robot-extra-time $ROBOT_EXTRA_TIME -maximize -auto-explore
ls -l ER_actionlog
