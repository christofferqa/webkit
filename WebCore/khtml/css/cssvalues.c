/* ANSI-C code produced by gperf version 2.7.2 */
/* Command-line: gperf -L ANSI-C -E -C -n -o -t -k '*' -NfindValue -Hhash_val -Wwordlist_value -D cssvalues.gperf  */
/* This file is automatically generated from cssvalues.in by makevalues, do not edit */
/* Copyright 1999 W. Bastian */
#include "cssvalues.h"
struct css_value {
    const char *name;
    int id;
};
/* maximum key range = 1826, duplicates = 2 */

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash_val (register const char *str, register unsigned int len)
{
  static const unsigned short asso_values[] =
    {
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826,   20, 1826, 1826,    0,   10,
        15,   20,   25,   30,   35,   40,    5,    0, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826,    0,    7,    3,
       173,  210,  210,   53,  205,   40,    0,  153,    0,   20,
        50,  125,   60,   25,    4,  125,    0,   65,  204,   65,
        80,  170,  105, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826, 1826,
      1826, 1826, 1826, 1826, 1826, 1826
    };
  register int hval = 0;

  switch (len)
    {
      default:
      case 22:
        hval += asso_values[(unsigned char)str[21]];
      case 21:
        hval += asso_values[(unsigned char)str[20]];
      case 20:
        hval += asso_values[(unsigned char)str[19]];
      case 19:
        hval += asso_values[(unsigned char)str[18]];
      case 18:
        hval += asso_values[(unsigned char)str[17]];
      case 17:
        hval += asso_values[(unsigned char)str[16]];
      case 16:
        hval += asso_values[(unsigned char)str[15]];
      case 15:
        hval += asso_values[(unsigned char)str[14]];
      case 14:
        hval += asso_values[(unsigned char)str[13]];
      case 13:
        hval += asso_values[(unsigned char)str[12]];
      case 12:
        hval += asso_values[(unsigned char)str[11]];
      case 11:
        hval += asso_values[(unsigned char)str[10]];
      case 10:
        hval += asso_values[(unsigned char)str[9]];
      case 9:
        hval += asso_values[(unsigned char)str[8]];
      case 8:
        hval += asso_values[(unsigned char)str[7]];
      case 7:
        hval += asso_values[(unsigned char)str[6]];
      case 6:
        hval += asso_values[(unsigned char)str[5]];
      case 5:
        hval += asso_values[(unsigned char)str[4]];
      case 4:
        hval += asso_values[(unsigned char)str[3]];
      case 3:
        hval += asso_values[(unsigned char)str[2]];
      case 2:
        hval += asso_values[(unsigned char)str[1]];
      case 1:
        hval += asso_values[(unsigned char)str[0]];
        break;
    }
  return hval;
}

#ifdef __GNUC__
__inline
#endif
const struct css_value *
findValue (register const char *str, register unsigned int len)
{
  enum
    {
      TOTAL_KEYWORDS = 253,
      MIN_WORD_LENGTH = 2,
      MAX_WORD_LENGTH = 22,
      MIN_HASH_VALUE = 0,
      MAX_HASH_VALUE = 1825
    };

  static const struct css_value wordlist_value[] =
    {
      {"900", CSS_VAL_900},
      {"ltr", CSS_VAL_LTR},
      {"rtl", CSS_VAL_RTL},
      {"800", CSS_VAL_800},
      {"100", CSS_VAL_100},
      {"200", CSS_VAL_200},
      {"300", CSS_VAL_300},
      {"400", CSS_VAL_400},
      {"500", CSS_VAL_500},
      {"600", CSS_VAL_600},
      {"700", CSS_VAL_700},
      {"italic", CSS_VAL_ITALIC},
      {"aqua", CSS_VAL_AQUA},
      {"wait", CSS_VAL_WAIT},
      {"up", CSS_VAL_UP},
      {"start", CSS_VAL_START},
      {"mix", CSS_VAL_MIX},
      {"small", CSS_VAL_SMALL},
      {"black", CSS_VAL_BLACK},
      {"static", CSS_VAL_STATIC},
      {"top", CSS_VAL_TOP},
      {"auto", CSS_VAL_AUTO},
      {"crop", CSS_VAL_CROP},
      {"sub", CSS_VAL_SUB},
      {"normal", CSS_VAL_NORMAL},
      {"teal", CSS_VAL_TEAL},
      {"compact", CSS_VAL_COMPACT},
      {"table", CSS_VAL_TABLE},
      {"icon", CSS_VAL_ICON},
      {"gray", CSS_VAL_GRAY},
      {"run-in", CSS_VAL_RUN_IN},
      {"portrait", CSS_VAL_PORTRAIT},
      {"x-small", CSS_VAL_X_SMALL},
      {"blink", CSS_VAL_BLINK},
      {"scroll", CSS_VAL_SCROLL},
      {"circle", CSS_VAL_CIRCLE},
      {"large", CSS_VAL_LARGE},
      {"scrollbar", CSS_VAL_SCROLLBAR},
      {"lime", CSS_VAL_LIME},
      {"larger", CSS_VAL_LARGER},
      {"pre", CSS_VAL_PRE},
      {"bottom", CSS_VAL_BOTTOM},
      {"caption", CSS_VAL_CAPTION},
      {"blue", CSS_VAL_BLUE},
      {"block", CSS_VAL_BLOCK},
      {"text", CSS_VAL_TEXT},
      {"thin", CSS_VAL_THIN},
      {"right", CSS_VAL_RIGHT},
      {"nowrap", CSS_VAL_NOWRAP},
      {"bold", CSS_VAL_BOLD},
      {"slow", CSS_VAL_SLOW},
      {"maroon", CSS_VAL_MAROON},
      {"xx-small", CSS_VAL_XX_SMALL},
      {"fast", CSS_VAL_FAST},
      {"both", CSS_VAL_BOTH},
      {"disc", CSS_VAL_DISC},
      {"menu", CSS_VAL_MENU},
      {"status-bar", CSS_VAL_STATUS_BAR},
      {"hiragana", CSS_VAL_HIRAGANA},
      {"small-caps", CSS_VAL_SMALL_CAPS},
      {"katakana", CSS_VAL_KATAKANA},
      {"smaller", CSS_VAL_SMALLER},
      {"always", CSS_VAL_ALWAYS},
      {"loud", CSS_VAL_LOUD},
      {"x-large", CSS_VAL_X_LARGE},
      {"armenian", CSS_VAL_ARMENIAN},
      {"cross", CSS_VAL_CROSS},
      {"red", CSS_VAL_RED},
      {"inline", CSS_VAL_INLINE},
      {"multiple", CSS_VAL_MULTIPLE},
      {"purple", CSS_VAL_PURPLE},
      {"thick", CSS_VAL_THICK},
      {"lower", CSS_VAL_LOWER},
      {"below", CSS_VAL_BELOW},
      {"down", CSS_VAL_DOWN},
      {"left", CSS_VAL_LEFT},
      {"navy", CSS_VAL_NAVY},
      {"inset", CSS_VAL_INSET},
      {"hand", CSS_VAL_HAND},
      {"square", CSS_VAL_SQUARE},
      {"table-row", CSS_VAL_TABLE_ROW},
      {"end", CSS_VAL_END},
      {"none", CSS_VAL_NONE},
      {"grey", CSS_VAL_GREY},
      {"orange", CSS_VAL_ORANGE},
      {"small-caption", CSS_VAL_SMALL_CAPTION},
      {"decimal", CSS_VAL_DECIMAL},
      {"xx-large", CSS_VAL_XX_LARGE},
      {"table-cell", CSS_VAL_TABLE_CELL},
      {"list-item", CSS_VAL_LIST_ITEM},
      {"capitalize", CSS_VAL_CAPITALIZE},
      {"-apple-aqua", CSS_VAL__APPLE_AQUA},
      {"vertical", CSS_VAL_VERTICAL},
      {"narrower", CSS_VAL_NARROWER},
      {"solid", CSS_VAL_SOLID},
      {"super", CSS_VAL_SUPER},
      {"oblique", CSS_VAL_OBLIQUE},
      {"alternate", CSS_VAL_ALTERNATE},
      {"help", CSS_VAL_HELP},
      {"center", CSS_VAL_CENTER},
      {"single", CSS_VAL_SINGLE},
      {"ridge", CSS_VAL_RIDGE},
      {"repeat", CSS_VAL_REPEAT},
      {"pointer", CSS_VAL_POINTER},
      {"wider", CSS_VAL_WIDER},
      {"text-top", CSS_VAL_TEXT_TOP},
      {"table-column", CSS_VAL_TABLE_COLUMN},
      {"transparent", CSS_VAL_TRANSPARENT},
      {"invert", CSS_VAL_INVERT},
      {"upper-latin", CSS_VAL_UPPER_LATIN},
      {"lighter", CSS_VAL_LIGHTER},
      {"lower-latin", CSS_VAL_LOWER_LATIN},
      {"table-caption", CSS_VAL_TABLE_CAPTION},
      {"graytext", CSS_VAL_GRAYTEXT},
      {"window", CSS_VAL_WINDOW},
      {"bolder", CSS_VAL_BOLDER},
      {"white", CSS_VAL_WHITE},
      {"show", CSS_VAL_SHOW},
      {"collapse", CSS_VAL_COLLAPSE},
      {"outset", CSS_VAL_OUTSET},
      {"green", CSS_VAL_GREEN},
      {"medium", CSS_VAL_MEDIUM},
      {"backwards", CSS_VAL_BACKWARDS},
      {"absolute", CSS_VAL_ABSOLUTE},
      {"marquee", CSS_VAL_MARQUEE},
      {"georgian", CSS_VAL_GEORGIAN},
      {"buttontext", CSS_VAL_BUTTONTEXT},
      {"avoid", CSS_VAL_AVOID},
      {"above", CSS_VAL_ABOVE},
      {"stretch", CSS_VAL_STRETCH},
      {"slide", CSS_VAL_SLIDE},
      {"inherit", CSS_VAL_INHERIT},
      {"block-axis", CSS_VAL_BLOCK_AXIS},
      {"fantasy", CSS_VAL_FANTASY},
      {"move", CSS_VAL_MOVE},
      {"captiontext", CSS_VAL_CAPTIONTEXT},
      {"yellow", CSS_VAL_YELLOW},
      {"olive", CSS_VAL_OLIVE},
      {"double", CSS_VAL_DOUBLE},
      {"silver", CSS_VAL_SILVER},
      {"repeat-x", CSS_VAL_REPEAT_X},
      {"text-bottom", CSS_VAL_TEXT_BOTTOM},
      {"ahead", CSS_VAL_AHEAD},
      {"serif", CSS_VAL_SERIF},
      {"-khtml-auto", CSS_VAL__KHTML_AUTO},
      {"separate", CSS_VAL_SEPARATE},
      {"justify", CSS_VAL_JUSTIFY},
      {"middle", CSS_VAL_MIDDLE},
      {"-khtml-normal", CSS_VAL__KHTML_NORMAL},
      {"upper-roman", CSS_VAL_UPPER_ROMAN},
      {"embed", CSS_VAL_EMBED},
      {"landscape", CSS_VAL_LANDSCAPE},
      {"lower-roman", CSS_VAL_LOWER_ROMAN},
      {"level", CSS_VAL_LEVEL},
      {"visible", CSS_VAL_VISIBLE},
      {"inline-table", CSS_VAL_INLINE_TABLE},
      {"hide", CSS_VAL_HIDE},
      {"-khtml-box", CSS_VAL__KHTML_BOX},
      {"crosshair", CSS_VAL_CROSSHAIR},
      {"background", CSS_VAL_BACKGROUND},
      {"menutext", CSS_VAL_MENUTEXT},
      {"inside", CSS_VAL_INSIDE},
      {"infinite", CSS_VAL_INFINITE},
      {"baseline", CSS_VAL_BASELINE},
      {"fuchsia", CSS_VAL_FUCHSIA},
      {"cursive", CSS_VAL_CURSIVE},
      {"horizontal", CSS_VAL_HORIZONTAL},
      {"inline-axis", CSS_VAL_INLINE_AXIS},
      {"default", CSS_VAL_DEFAULT},
      {"relative", CSS_VAL_RELATIVE},
      {"buttonface", CSS_VAL_BUTTONFACE},
      {"repeat-y", CSS_VAL_REPEAT_Y},
      {"no-repeat", CSS_VAL_NO_REPEAT},
      {"dotted", CSS_VAL_DOTTED},
      {"upper-alpha", CSS_VAL_UPPER_ALPHA},
      {"lower-alpha", CSS_VAL_LOWER_ALPHA},
      {"inline-block", CSS_VAL_INLINE_BLOCK},
      {"hebrew", CSS_VAL_HEBREW},
      {"forwards", CSS_VAL_FORWARDS},
      {"-khtml-text", CSS_VAL__KHTML_TEXT},
      {"fixed", CSS_VAL_FIXED},
      {"infotext", CSS_VAL_INFOTEXT},
      {"higher", CSS_VAL_HIGHER},
      {"monospace", CSS_VAL_MONOSPACE},
      {"-khtml-right", CSS_VAL__KHTML_RIGHT},
      {"groove", CSS_VAL_GROOVE},
      {"-khtml-nowrap", CSS_VAL__KHTML_NOWRAP},
      {"activecaption", CSS_VAL_ACTIVECAPTION},
      {"uppercase", CSS_VAL_UPPERCASE},
      {"outside", CSS_VAL_OUTSIDE},
      {"lowercase", CSS_VAL_LOWERCASE},
      {"hiragana-iroha", CSS_VAL_HIRAGANA_IROHA},
      {"katakana-iroha", CSS_VAL_KATAKANA_IROHA},
      {"table-row-group", CSS_VAL_TABLE_ROW_GROUP},
      {"n-resize", CSS_VAL_N_RESIZE},
      {"w-resize", CSS_VAL_W_RESIZE},
      {"highlight", CSS_VAL_HIGHLIGHT},
      {"underline", CSS_VAL_UNDERLINE},
      {"windowtext", CSS_VAL_WINDOWTEXT},
      {"inactivecaption", CSS_VAL_INACTIVECAPTION},
      {"table-column-group", CSS_VAL_TABLE_COLUMN_GROUP},
      {"nw-resize", CSS_VAL_NW_RESIZE},
      {"-khtml-left", CSS_VAL__KHTML_LEFT},
      {"s-resize", CSS_VAL_S_RESIZE},
      {"overline", CSS_VAL_OVERLINE},
      {"hidden", CSS_VAL_HIDDEN},
      {"appworkspace", CSS_VAL_APPWORKSPACE},
      {"dashed", CSS_VAL_DASHED},
      {"open-quote", CSS_VAL_OPEN_QUOTE},
      {"-khtml-body", CSS_VAL__KHTML_BODY},
      {"-khtml-center", CSS_VAL__KHTML_CENTER},
      {"sw-resize", CSS_VAL_SW_RESIZE},
      {"close-quote", CSS_VAL_CLOSE_QUOTE},
      {"sans-serif", CSS_VAL_SANS_SERIF},
      {"e-resize", CSS_VAL_E_RESIZE},
      {"buttonshadow", CSS_VAL_BUTTONSHADOW},
      {"-khtml-xxx-large", CSS_VAL__KHTML_XXX_LARGE},
      {"expanded", CSS_VAL_EXPANDED},
      {"windowframe", CSS_VAL_WINDOWFRAME},
      {"reverse", CSS_VAL_REVERSE},
      {"ne-resize", CSS_VAL_NE_RESIZE},
      {"message-box", CSS_VAL_MESSAGE_BOX},
      {"line-through", CSS_VAL_LINE_THROUGH},
      {"activeborder", CSS_VAL_ACTIVEBORDER},
      {"-khtml-inline-box", CSS_VAL__KHTML_INLINE_BOX},
      {"ultra-expanded", CSS_VAL_ULTRA_EXPANDED},
      {"buttonhighlight", CSS_VAL_BUTTONHIGHLIGHT},
      {"se-resize", CSS_VAL_SE_RESIZE},
      {"lower-greek", CSS_VAL_LOWER_GREEK},
      {"infobackground", CSS_VAL_INFOBACKGROUND},
      {"inactiveborder", CSS_VAL_INACTIVEBORDER},
      {"no-open-quote", CSS_VAL_NO_OPEN_QUOTE},
      {"cjk-ideographic", CSS_VAL_CJK_IDEOGRAPHIC},
      {"highlighttext", CSS_VAL_HIGHLIGHTTEXT},
      {"no-close-quote", CSS_VAL_NO_CLOSE_QUOTE},
      {"inactivecaptiontext", CSS_VAL_INACTIVECAPTIONTEXT},
      {"condensed", CSS_VAL_CONDENSED},
      {"ultra-condensed", CSS_VAL_ULTRA_CONDENSED},
      {"threedface", CSS_VAL_THREEDFACE},
      {"table-footer-group", CSS_VAL_TABLE_FOOTER_GROUP},
      {"bidi-override", CSS_VAL_BIDI_OVERRIDE},
      {"extra-expanded", CSS_VAL_EXTRA_EXPANDED},
      {"-khtml-around-floats", CSS_VAL__KHTML_AROUND_FLOATS},
      {"table-header-group", CSS_VAL_TABLE_HEADER_GROUP},
      {"semi-expanded", CSS_VAL_SEMI_EXPANDED},
      {"extra-condensed", CSS_VAL_EXTRA_CONDENSED},
      {"decimal-leading-zero", CSS_VAL_DECIMAL_LEADING_ZERO},
      {"threedshadow", CSS_VAL_THREEDSHADOW},
      {"semi-condensed", CSS_VAL_SEMI_CONDENSED},
      {"threedhighlight", CSS_VAL_THREEDHIGHLIGHT},
      {"-khtml-baseline-middle", CSS_VAL__KHTML_BASELINE_MIDDLE},
      {"threedlightshadow", CSS_VAL_THREEDLIGHTSHADOW},
      {"threeddarkshadow", CSS_VAL_THREEDDARKSHADOW}
    };

  static const short lookup[] =
    {
         0,   -1,   -1,   -1, -260,    3, -252,   -2,
        -1,   -1,    4,   -1,   -1,   -1,   -1,    5,
        -1,   -1,   -1,   -1,    6,   -1,   -1,   -1,
        -1,    7,   -1,   -1,   -1,   -1,    8,   -1,
        -1,   -1,   -1,    9,   -1,   -1,   -1,   -1,
        10,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   11,   -1,   -1,   -1,   -1,
        -1,   -1,   12,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   13,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   14,   -1,   -1,
        -1,   15,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   16,   -1,   -1,   -1,
        -1,   17,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   18,   -1,   -1,   -1,   -1,
        19,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   20,   -1,   -1,   -1,   -1,   21,   -1,
        22,   -1,   -1,   -1,   -1,   23,   -1,   24,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   25,   26,   -1,   -1,   -1,   -1,
        -1,   27,   28,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   29,   -1,   30,   -1,   -1,
        -1,   31,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   32,   -1,   -1,
        -1,   -1,   33,   -1,   -1,   -1,   -1,   -1,
        -1,   34,   -1,   -1,   35,   -1,   -1,   -1,
        -1,   -1,   -1,   36,   37,   -1,   38,   39,
        -1,   -1,   40,   -1,   -1,   41,   42,   -1,
        -1,   -1,   43,   -1,   -1,   -1,   -1,   -1,
        44,   -1,   45,   -1,   -1,   -1,   -1,   46,
        -1,   -1,   -1,   -1,   -1,   -1,   47,   -1,
        48,   49,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   50,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   51,   52,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   53,
        -1,   54,   -1,   -1,   -1,   55,   -1,   -1,
        -1,   56,   57,   -1,   -1,   -1,   -1,   -1,
        58,   59,   -1,   -1,   60,   -1,   -1,   61,
        62,   -1,   -1,   63,   -1,   -1,   -1,   64,
        -1,   -1,   -1,   -1,   -1,   -1,   65,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   66,   -1,
        -1,   -1,   -1,   67,   -1,   -1,   68,   -1,
        -1,   -1,   -1,   69,   -1,   -1,   -1,   70,
        -1,   71,   -1,   -1,   72,   -1,   -1,   73,
        -1,   -1,   -1,   -1,   -1,   74,   -1,   -1,
        -1,   -1,   -1,   -1,   75,   -1,   -1,   -1,
        76,   77,   -1,   -1,   78,   79,   -1,   80,
        -1,   81,   -1,   82,   -1,   83,   -1,   -1,
        -1,   -1,   84,   85,   -1,   -1,   86,   87,
        -1,   -1,   88,   -1,   -1,   -1,   -1,   89,
        -1,   -1,   90,   -1,   91,   92,   93,   94,
        95,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        96,   -1,   97,   98,   -1,   99,  100,   -1,
       101,   -1,   -1,   -1,  102,   -1,   -1,   -1,
        -1,  103,   -1,   -1,  104,   -1,   -1,  105,
        -1,   -1,   -1,   -1,  106,   -1,   -1,  107,
        -1,   -1,   -1,   -1,  108,  109,   -1,   -1,
       110,   -1,  111,  112,   -1,  113,  114,  115,
      -775, -137,   -2,  118,   -1,  119,   -1,  120,
       121,   -1,  122,   -1,  123,   -1,  124,  125,
        -1,  126,   -1,   -1,   -1,   -1,  127,   -1,
        -1,   -1,  128,  129,  130,  131,   -1,   -1,
        -1,  132,   -1,  133,   -1,   -1,   -1,  134,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       135,   -1,  136,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,  137,  138,   -1,   -1,  139,
       140,   -1,   -1,  141,  142,  143,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       144,  145,  146,   -1,   -1,   -1,   -1,   -1,
       147,  148,  149,   -1,  150,  151,   -1,  152,
       153,   -1,  154,  155,  156,   -1,  157,  158,
        -1,  159,   -1,  160,   -1,   -1,  161,   -1,
       162,   -1,  163,   -1,   -1,   -1,   -1,   -1,
       164,   -1,   -1,  165,   -1,   -1,  166,  167,
        -1,   -1,  168,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,  169,   -1,  170,   -1,
        -1,   -1,  171,   -1,   -1,   -1,   -1,  172,
        -1,  173,   -1,   -1,  174,   -1,   -1,   -1,
        -1,  175,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,  176,   -1,   -1,  177,   -1,   -1,
        -1,   -1,  178,   -1,  179,   -1,   -1,   -1,
        -1,  180,   -1,  181,   -1,  182,  183,   -1,
       184,  185,  186,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,  187,
        -1,  188,  189,   -1,   -1,   -1,  190,   -1,
        -1,   -1,  191,   -1,   -1,   -1,  192,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  193,   -1,
        -1,   -1,   -1,   -1,  194,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,  195,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  196,  197,   -1,   -1,   -1,   -1,   -1,
       198,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  199,   -1,  200,   -1,  201,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  202,  203,
        -1,   -1,   -1,  204,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,  205,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  206,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  207,   -1,
        -1,   -1,  208,   -1,   -1,  209,   -1,  210,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       211,   -1,   -1,   -1,  212,  213,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,  214,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,  215,   -1,   -1,   -1,
        -1,  216,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,  217,   -1,   -1,   -1,
        -1,   -1,  218,   -1,   -1,   -1,   -1,  219,
        -1,   -1,   -1,   -1,   -1,   -1,  220,  221,
        -1,  222,   -1,   -1,  223,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       224,   -1,   -1,   -1,   -1,  225,   -1,   -1,
       226,  227,   -1,   -1,   -1,   -1,  228,   -1,
        -1,   -1,  229,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  230,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,  231,   -1,   -1,
        -1,  232,   -1,  233,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,  234,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,  235,   -1,   -1,   -1,  236,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       237,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  238,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  239,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,  240,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  241,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,  242,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  243,   -1,
        -1,   -1,   -1,  244,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  245,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       246,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,  247,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,  248,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,  249,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
       250,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  251,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
        -1,  252
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      register int key = hash_val (str, len);

      if (key <= MAX_HASH_VALUE && key >= 0)
        {
          register int index = lookup[key];

          if (index >= 0)
            {
              register const char *s = wordlist_value[index].name;

              if (*str == *s && !strcmp (str + 1, s + 1))
                return &wordlist_value[index];
            }
          else if (index < -TOTAL_KEYWORDS)
            {
              register int offset = - 1 - TOTAL_KEYWORDS - index;
              register const struct css_value *wordptr = &wordlist_value[TOTAL_KEYWORDS + lookup[offset]];
              register const struct css_value *wordendptr = wordptr + -lookup[offset + 1];

              while (wordptr < wordendptr)
                {
                  register const char *s = wordptr->name;

                  if (*str == *s && !strcmp (str + 1, s + 1))
                    return wordptr;
                  wordptr++;
                }
            }
        }
    }
  return 0;
}
static const char * const valueList[] = {
"",
"inherit", 
"none", 
"hidden", 
"inset", 
"groove", 
"ridge", 
"outset", 
"dotted", 
"dashed", 
"solid", 
"double", 
"-apple-aqua", 
"caption", 
"icon", 
"menu", 
"message-box", 
"small-caption", 
"status-bar", 
"italic", 
"oblique", 
"small-caps", 
"normal", 
"bold", 
"bolder", 
"lighter", 
"100", 
"200", 
"300", 
"400", 
"500", 
"600", 
"700", 
"800", 
"900", 
"xx-small", 
"x-small", 
"small", 
"medium", 
"large", 
"x-large", 
"xx-large", 
"-khtml-xxx-large", 
"smaller", 
"larger", 
"wider", 
"narrower", 
"ultra-condensed", 
"extra-condensed", 
"condensed", 
"semi-condensed", 
"semi-expanded", 
"expanded", 
"extra-expanded", 
"ultra-expanded", 
"serif", 
"sans-serif", 
"cursive", 
"fantasy", 
"monospace", 
"-khtml-body", 
"transparent", 
"aqua", 
"black", 
"blue", 
"fuchsia", 
"gray", 
"green", 
"lime", 
"maroon", 
"navy", 
"olive", 
"orange", 
"purple", 
"red", 
"silver", 
"teal", 
"white", 
"yellow", 
"activeborder", 
"activecaption", 
"appworkspace", 
"background", 
"buttonface", 
"buttonhighlight", 
"buttonshadow", 
"buttontext", 
"captiontext", 
"graytext", 
"highlight", 
"highlighttext", 
"inactiveborder", 
"inactivecaption", 
"inactivecaptiontext", 
"infobackground", 
"infotext", 
"menutext", 
"scrollbar", 
"threeddarkshadow", 
"threedface", 
"threedhighlight", 
"threedlightshadow", 
"threedshadow", 
"window", 
"windowframe", 
"windowtext", 
"grey", 
"-khtml-text", 
"repeat", 
"repeat-x", 
"repeat-y", 
"no-repeat", 
"baseline", 
"middle", 
"sub", 
"super", 
"text-top", 
"text-bottom", 
"top", 
"bottom", 
"-khtml-baseline-middle", 
"-khtml-auto", 
"left", 
"right", 
"center", 
"justify", 
"-khtml-left", 
"-khtml-right", 
"-khtml-center", 
"outside", 
"inside", 
"disc", 
"circle", 
"square", 
"decimal", 
"decimal-leading-zero", 
"lower-roman", 
"upper-roman", 
"lower-greek", 
"lower-alpha", 
"lower-latin", 
"upper-alpha", 
"upper-latin", 
"hebrew", 
"armenian", 
"georgian", 
"cjk-ideographic", 
"hiragana", 
"katakana", 
"hiragana-iroha", 
"katakana-iroha", 
"inline", 
"block", 
"list-item", 
"run-in", 
"compact", 
"inline-block", 
"table", 
"inline-table", 
"table-row-group", 
"table-header-group", 
"table-footer-group", 
"table-row", 
"table-column-group", 
"table-column", 
"table-cell", 
"table-caption", 
"-khtml-box", 
"-khtml-inline-box", 
"auto", 
"crosshair", 
"default", 
"pointer", 
"move", 
"e-resize", 
"ne-resize", 
"nw-resize", 
"n-resize", 
"se-resize", 
"sw-resize", 
"s-resize", 
"w-resize", 
"text", 
"wait", 
"help", 
"ltr", 
"rtl", 
"capitalize", 
"uppercase", 
"lowercase", 
"visible", 
"collapse", 
"above", 
"absolute", 
"always", 
"avoid", 
"below", 
"bidi-override", 
"blink", 
"both", 
"close-quote", 
"crop", 
"cross", 
"embed", 
"fixed", 
"hand", 
"hide", 
"higher", 
"invert", 
"landscape", 
"level", 
"line-through", 
"loud", 
"lower", 
"marquee", 
"mix", 
"no-close-quote", 
"no-open-quote", 
"nowrap", 
"open-quote", 
"overline", 
"portrait", 
"pre", 
"relative", 
"scroll", 
"separate", 
"show", 
"static", 
"thick", 
"thin", 
"underline", 
"-khtml-nowrap", 
"-khtml-normal", 
"-khtml-around-floats", 
"stretch", 
"start", 
"end", 
"reverse", 
"horizontal", 
"vertical", 
"inline-axis", 
"block-axis", 
"single", 
"multiple", 
"forwards", 
"backwards", 
"ahead", 
"up", 
"down", 
"slow", 
"fast", 
"infinite", 
"slide", 
"alternate", 
    0
};
DOMString getValueName(unsigned short id)
{
    if(id >= CSS_VAL_TOTAL || id == 0)
      return DOMString();
    else
      return DOMString(valueList[id]);
};

