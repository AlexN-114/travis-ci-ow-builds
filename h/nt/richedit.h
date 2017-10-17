/*
 *  richedit.h  Rich edit control definitions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2017 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _RICHEDIT_
#define _RICHEDIT_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Rich edit version number */
#ifndef _RICHEDIT_VER
    #define _RICHEDIT_VER   0x0300
#endif

/* Default text limit */
#define cchTextLimitDefault 32767

/* Rich edit window clases */
#define MSFTEDIT_CLASS          L"RICHEDIT50W"
#define RICHEDIT_CLASSA         "RichEdit20A"
#define RICHEDIT_CLASSW         L"RichEdit20W"
#define RICHEDIT_CLASS10A       "RICHEDIT"
#if (_RICHEDIT_VER >= 0x0200)
    #ifdef UNICODE
        #define RICHEDIT_CLASS  RICHEDIT_CLASSW
    #else
        #define RICHEDIT_CLASS  RICHEDIT_CLASSA
    #endif
#else
    #define RICHEDIT_CLASS      RICHEDIT_CLASS10A
#endif

/* Window messages */
#ifndef WM_CONTEXTMENU
#define WM_CONTEXTMENU  0x007B
#endif
#ifndef WM_UNICHAR
#define WM_UNICHAR      0x0109
#endif
#ifndef WM_PRINTCLIENT
#define WM_PRINTCLIENT  0x0318
#endif

/* Edit control messages */
#ifndef EM_GETLIMITTEXT
#define EM_GETLIMITTEXT (WM_USER + 37)
#endif
#ifndef EM_POSFROMCHAR
#define EM_POSFROMCHAR  (WM_USER + 38)
#define EM_CHARFROMPOS  (WM_USER + 39)
#endif

/* Rich edit control messages */
#define EM_CANPASTE             (WM_USER + 50)
#define EM_DISPLAYBAND          (WM_USER + 51)
#define EM_EXGETSEL             (WM_USER + 52)
#define EM_EXLIMITTEXT          (WM_USER + 53)
#define EM_EXLINEFROMCHAR       (WM_USER + 54)
#define EM_EXSETSEL             (WM_USER + 55)
#define EM_FINDTEXT             (WM_USER + 56)
#define EM_FORMATRANGE          (WM_USER + 57)
#define EM_GETCHARFORMAT        (WM_USER + 58)
#define EM_GETEVENTMASK         (WM_USER + 59)
#define EM_GETOLEINTERFACE      (WM_USER + 60)
#define EM_GETPARAFORMAT        (WM_USER + 61)
#define EM_GETSELTEXT           (WM_USER + 62)
#define EM_HIDESELECTION        (WM_USER + 63)
#define EM_PASTESPECIAL         (WM_USER + 64)
#define EM_REQUESTRESIZE        (WM_USER + 65)
#define EM_SELECTIONTYPE        (WM_USER + 66)
#define EM_SETBKGNDCOLOR        (WM_USER + 67)
#define EM_SETCHARFORMAT        (WM_USER + 68)
#define EM_SETEVENTMASK         (WM_USER + 69)
#define EM_SETOLECALLBACK       (WM_USER + 70)
#define EM_SETPARAFORMAT        (WM_USER + 71)
#define EM_SETTARGETDEVICE      (WM_USER + 72)
#define EM_STREAMIN             (WM_USER + 73)
#define EM_STREAMOUT            (WM_USER + 74)
#define EM_GETTEXTRANGE         (WM_USER + 75)
#define EM_FINDWORDBREAK        (WM_USER + 76)
#define EM_SETOPTIONS           (WM_USER + 77)
#define EM_GETOPTIONS           (WM_USER + 78)
#define EM_FINDTEXTEX           (WM_USER + 79)
#define EM_GETWORDBREAKPROCEX   (WM_USER + 80)
#define EM_SETWORDBREAKPROCEX   (WM_USER + 81)
#define EM_SETUNDOLIMIT         (WM_USER + 82)
#define EM_REDO                 (WM_USER + 84)
#define EM_CANREDO              (WM_USER + 85)
#define EM_GETUNDONAME          (WM_USER + 86)
#define EM_GETREDONAME          (WM_USER + 87)
#define EM_STOPGROUPTYPING      (WM_USER + 88)
#define EM_SETTEXTMODE          (WM_USER + 89)
#define EM_GETTEXTMODE          (WM_USER + 90)
#define EM_AUTOURLDETECT        (WM_USER + 91)
#define EM_GETAUTOURLDETECT     (WM_USER + 92)
#define EM_SETPALETTE           (WM_USER + 93)
#define EM_GETTEXTEX            (WM_USER + 94)
#define EM_GETTEXTLENGTHEX      (WM_USER + 95)
#define EM_SHOWSCROLLBAR        (WM_USER + 96)
#define EM_SETTEXTEX            (WM_USER + 97)
#define EM_SETPUNCTUATION       (WM_USER + 100)
#define EM_GETPUNCTUATION       (WM_USER + 101)
#define EM_SETWORDWRAPMODE      (WM_USER + 102)
#define EM_GETWORDWRAPMODE      (WM_USER + 103)
#define EM_SETIMECOLOR          (WM_USER + 104)
#define EM_GETIMECOLOR          (WM_USER + 105)
#define EM_SETIMEOPTIONS        (WM_USER + 106)
#define EM_GETIMEOPTIONS        (WM_USER + 107)
#define EM_CONVPOSITION         (WM_USER + 108)
#define EM_SETLANGOPTIONS       (WM_USER + 120)
#define EM_GETLANGOPTIONS       (WM_USER + 121)
#define EM_GETIMECOMPMODE       (WM_USER + 122)
#define EM_FINDTEXTW            (WM_USER + 123)
#define EM_FINDTEXTEXW          (WM_USER + 124)
#define EM_RECONVERSION         (WM_USER + 125)
#define EM_SETTIMEMODEBIAS      (WM_USER + 126)
#define EM_GETTIMEMODEBIAS      (WM_USER + 127)
#define EM_SETBIDIOPTIONS       (WM_USER + 200)
#define EM_GETBIDIOPTIONS       (WM_USER + 201)
#define EM_SETTYPOGRAPHYOPTIONS (WM_USER + 202)
#define EM_GETTYPOGRAPHYOPTIONS (WM_USER + 203)
#define EM_SETEDITSTYLE         (WM_USER + 204)
#define EM_GETEDITSTYLE         (WM_USER + 205)
#define EM_OUTLINE              (WM_USER + 220)
#define EM_GETSCROLLPOS         (WM_USER + 221)
#define EM_SETSCROLLPOS         (WM_USER + 222)
#define EM_SETFONTSIZE          (WM_USER + 223)
#define EM_GETZOOM              (WM_USER + 224)
#define EM_SETZOOM              (WM_USER + 225)
#define EM_GETVIEWKIND          (WM_USER + 226)
#define EM_SETVIEWKIND          (WM_USER + 227)
#define EM_GETPAGE              (WM_USER + 228)
#define EM_SETPAGE              (WM_USER + 229)
#define EM_GETHYPHENATEINFO     (WM_USER + 230)
#define EM_SETHYPHENATEINFO     (WM_USER + 231)
#define EM_GETPAGEROTATE        (WM_USER + 235)
#define EM_SETPAGEROTATE        (WM_USER + 236)
#define EM_GETCTFMODEBIAS       (WM_USER + 237)
#define EM_SETCTFMODEBIAS       (WM_USER + 238)
#define EM_GETCTFOPENSTATUS     (WM_USER + 240)
#define EM_SETCTFOPENSTATUS     (WM_USER + 241)
#define EM_GETIMECOMPTEXT       (WM_USER + 242)
#define EM_ISIME                (WM_USER + 243)
#define EM_GETIMEPROPERTY       (WM_USER + 244)
#define EM_GETQUERYRTFOBJ       (WM_USER + 269)
#define EM_SETQUERYRTFOBJ       (WM_USER + 270)

/* Rich edit control notifications */
#define EN_MSGFILTER            0x0700
#define EN_REQUESTRESIZE        0x0701
#define EN_SELCHANGE            0x0702
#define EN_DROPFILES            0x0703
#define EN_PROTECTED            0x0704
#define EN_CORRECTTEXT          0x0705
#define EN_STOPNOUNDO           0x0706
#define EN_IMECHANGE            0x0707
#define EN_SAVECLIPBOARD        0x0708
#define EN_OLEOPFAILED          0x0709
#define EN_OBJECTPOSITIONS      0x070A
#define EN_LINK                 0x070B
#define EN_DRAGDROPDONE         0x070C
#define EN_PARAGRAPHEXPANDED    0x070D
#define EN_PAGECHANGE           0x070E
#define EN_LOWFIRTF             0x070F
#define EN_ALIGNLTR             0x0710
#define EN_ALIGNRTL             0x0711

/* EM_SETEDITSTYLE flags */
#define SES_EMULATESYSEDIT      0x00000001L
#define SES_BEEPONMAXTEXT       0x00000002L
#define SES_EXTENDBACKCOLOR     0x00000004L
#define SES_MAPCPS              0x00000008L
#define SES_EMULATE10           0x00000010L
#define SES_USECRLF             0x00000020L
#define SES_NOXLTSYMBOLRANGE    0x00000020L
#define SES_USEAIMM             0x00000040L
#define SES_NOIME               0x00000080L
#define SES_ALLOWBEEPS          0x00000100L
#define SES_UPPERCASE           0x00000200L
#define SES_LOWERCASE           0x00000400L
#define SES_NOINPUTSEQUENCECHK  0x00000800L
#define SES_BIDI                0x00001000L
#define SES_SCROLLONKILLFOCUS   0x00002000L
#define SES_XLTCRCRLFTOCR       0x00004000L
#define SES_DRAFTMODE           0x00008000L
#define SES_USECTF              0x00010000L
#define SES_HIDEGRIDLINES       0x00020000L
#define SES_USEATFONT           0x00040000L
#define SES_CUSTOMLOOK          0x00080000L
#define SES_LBSCROLLNOTIFY      0x00100000L
#define SES_CTFALLOWEMBED       0x00200000L
#define SES_CTFALLOWSMARTTAG    0x00400000L
#define SES_CTFALLOWPROOFING    0x00800000L

/* Rich edit language options */
#define IMF_AUTOKEYBOARD        0x0001
#define IMF_AUTOFONT            0x0002
#define IMF_IMECANCELCOMPLETE   0x0004
#define IMF_IMEALWAYSSENDNOTIFY 0x0008
#define IMF_AUTOFONTSIZEADJUST  0x0010
#define IMF_UIFONTS             0x0020
#define IMF_DUALFONT            0x0080
#define IMF_NORTFFONTSUBSTITUTE 0x0400

/* IME composition modes */
#define ICM_NOTOPEN     0x0000
#define ICM_LEVEL3      0x0001
#define ICM_LEVEL2      0x0002
#define ICM_LEVEL2_5    0x0003
#define ICM_LEVEL2_SUI  0x0004
#define ICM_CTF         0x0005

/* Typography options */
#define TO_ADVANCEDTYPOGRAPHY   1
#define TO_SIMPLELINEBREAK      2
#define TO_DISABLECUSTOMTEXTOUT 4
#define TO_ADVANCEDLAYOUT       8

/* Page rotation values */
#define EPR_0   0
#define EPR_270 1
#define EPR_180 2
#define EPR_90  3

/* CTF mode bias values */
#define CTFMODEBIAS_DEFAULT                 0x0000
#define CTFMODEBIAS_FILENAME                0x0001
#define CTFMODEBIAS_NAME                    0x0002
#define CTFMODEBIAS_READING                 0x0003
#define CTFMODEBIAS_DATETIME                0x0004
#define CTFMODEBIAS_CONVERSATION            0x0005
#define CTFMODEBIAS_NUMERIC                 0x0006
#define CTFMODEBIAS_HIRAGANA                0x0007
#define CTFMODEBIAS_KATAKANA                0x0008
#define CTFMODEBIAS_HANGUL                  0x0009
#define CTFMODEBIAS_HALFWIDTHKATAKANA       0x000A
#define CTFMODEBIAS_FULLWIDTHALPHANUMERIC   0x000B
#define CTFMODEBIAS_HALFWIDTHALPHANUMERIC   0x000C

/* IME mode bias values */
#define IMF_SMODE_PLURALCLAUSE  0x0001
#define IMF_SMODE_NONE          0x0002

/* IME composition text flags */
#define ICT_RESULTREADSTR   0x00000001L

/* Outline modes */
#define EMO_EXIT            0
#define EMO_ENTER           1
#define EMO_PROMOTE         2
#define EMO_EXPAND          3
#define EMO_MOVESELECTION   4
#define EMO_GETVIEWMODE     5

/* EMO_EXPAND options */
#define EMO_EXPANDSELECTION 0
#define EMO_EXPANDDOCUMENT  1

/* View modes */
#define VM_NORMAL   4
#define VM_OUTLINE  2
#define VM_PAGE     9

/* Event notification masks */
#define ENM_NONE                0x00000000L
#define ENM_CHANGE              0x00000001L
#define ENM_UPDATE              0x00000002L
#define ENM_SCROLL              0x00000004L
#define ENM_SCROLLEVENTS        0x00000008L
#define ENM_DRAGDROPNONE        0x00000010L
#define ENM_PARAGRAPHEXPANDED   0x00000020L
#define ENM_PAGECHANGE          0x00000040L
#define ENM_KEYEVENTS           0x00010000L
#define ENM_MOUSEEVENTS         0x00020000L
#define ENM_REQUESTRESIZE       0x00040000L
#define ENM_SELCHANGE           0x00080000L
#define ENM_DROPFILES           0x00100000L
#define ENM_PROTECTED           0x00200000L
#define ENM_CORRECTTEXT         0x00400000L
#define ENM_IMECHANGE           0x00800000L
#define ENM_LANGCHANGE          0x01000000L
#define ENM_OBJECTPOSITIONS     0x02000000L
#define ENM_LINK                0x04000000L
#define ENM_LOWFIRTF            0x08000000L

/* Rich edit control styles */
#define ES_NOOLEDRAGDROP    0x00000008L
#define ES_DISABLENOSCROLL  0x00002000L
#define ES_SUNKEN           0x00004000L
#define ES_SAVESEL          0x00008000L
#define ES_SELFIME          0x00040000L
#define ES_NOIME            0x00080000L
#define ES_VERTICAL         0x00400000L
#define ES_SELECTIONBAR     0x01000000L

/* Rich edit control extended styles */
#if (WINVER > 0x0400) | (_WIN32_WINNT > 0x0400)
    #define ES_EX_NOCALLOLEINIT 0x00000000L
#else
    #define ES_EX_NOCALLOLEINIT 0x01000000L
#endif

/* Rich edit control options */
#define ECO_AUTOWORDSELECTION   0x00000001L
#define ECO_AUTOVSCROLL         0x00000040L
#define ECO_AUTOHSCROLL         0x00000080L
#define ECO_NOHIDESEL           0x00000100L
#define ECO_READONLY            0x00000800L
#define ECO_WANTRETURN          0x00001000L
#define ECO_SAVESEL             0x00008000L
#define ECO_VERTICAL            0x00400000L
#define ECO_SELECTIONBAR        0x01000000L

/* Rich edit control option operations */
#define ECOOP_SET   0x0001
#define ECOOP_OR    0x0002
#define ECOOP_AND   0x0003
#define ECOOP_XOR   0x0004

/* Word break procedure codes */
#define WB_CLASSIFY         3
#define WB_MOVEWORDLEFT     4
#define WB_MOVEWORDRIGHT    5
#define WB_LEFTBREAK        6
#define WB_RIGHTBREAK       7
#define WB_MOVEWORDPREV     4
#define WB_MOVEWORDNEXT     5
#define WB_PREVBREAK        6
#define WB_NEXTBREAK        7

/* Punctuation types */
#define PC_FOLLOWING    1
#define PC_LEADING      2
#define PC_OVERFLOW     3
#define PC_DELIMITER    4

/* Word break flags */
#define WBF_WORDWRAP    0x0010
#define WBF_WORDBREAK   0x0020
#define WBF_OVERFLOW    0x0040
#define WBF_LEVEL1      0x0080
#define WBF_LEVEL2      0x0100
#define WBF_CUSTOM      0x0200

/* IME flags */
#define IMF_FORCENONE           0x0001
#define IMF_FORCEENABLE         0x0002
#define IMF_FORCEDISABLE        0x0004
#define IMF_CLOSESTATUSWINDOW   0x0008
#define IMF_VERTICAL            0x0020
#define IMF_FORCEACTIVE         0x0040
#define IMF_FORCEINACTIVE       0x0080
#define IMF_FORCEREMEMBER       0x0100
#define IMF_MULTIPLEEDIT        0x0400

/* Word break flags for WB_CLASSIFY */
#define WBF_CLASS       0x0F
#define WBF_ISWHITE     0x10
#define WBF_BREAKLINE   0x20
#define WBF_BREAKAFTER  0x40

/* Charactering formatting masks */
#define CFM_BOLD            0x00000001L
#define CFM_ITALIC          0x00000002L
#define CFM_UNDERLINE       0x00000004L
#define CFM_STRIKEOUT       0x00000008L
#define CFM_PROTECTED       0x00000010L
#define CFM_LINK            0x00000020L
#define CFM_SMALLCAPS       0x00000040L
#define CFM_ALLCAPS         0x00000080L
#define CFM_HIDDEN          0x00000100L
#define CFM_OUTLINE         0x00000200L
#define CFM_SHADOW          0x00000400L
#define CFM_EMBOSS          0x00000800L
#define CFM_IMPRINT         0x00001000L
#define CFM_DISABLED        0x00002000L
#define CFM_REVISED         0x00004000L
#define CFM_REVAUTHOR       0x00008000L
#define CFM_SUPERSCRIPT     0x00010000L
#define CFM_SUBSCRIPT       0x00030000L
#define CFM_ANIMATION       0x00040000L
#define CFM_STYLE           0x00080000L
#define CFM_KERNING         0x00100000L
#define CFM_SPACING         0x00200000L
#define CFM_WEIGHT          0x00400000L
#define CFM_UNDERLINETYPE   0x00800000L
#define CFM_LCID            0x02000000L
#ifndef CFM_BACKCOLOR
    #define CFM_BACKCOLOR   0x04000000L
#endif
#define CFM_CHARSET         0x08000000L
#define CFM_OFFSET          0x10000000L
#define CFM_FACE            0x20000000L
#define CFM_COLOR           0x40000000L
#define CFM_SIZE            0x80000000L
#define CFM_EFFECTS \
    (CFM_BOLD | CFM_ITALIC | CFM_UNDERLINE | CFM_COLOR | CFM_STRIKEOUT | \
    CFM_PROTECTED | CFM_LINK)
#define CFM_ALL \
    (CFM_EFFECTS | CFM_SIZE | CFM_FACE | CFM_OFFSET | CFM_CHARSET)
#define CFM_EFFECTS2 \
    (CFM_EFFECTS | CFM_DISABLED | CFM_SMALLCAPS | CFM_ALLCAPS | CFM_HIDDEN | \
    CFM_OUTLINE | CFM_SHADOW | CFM_EMBOSS | CFM_IMPRINT | CFM_DISABLED | CFM_REVISED | \
    CFM_SUBSCRIPT | CFM_SUPERSCRIPT | CFM_BACKCOLOR)
#define CFM_ALL2 \
    (CFM_ALL | CFM_EFFECTS2 | CFM_BACKCOLOR | CFM_LCID | CFM_UNDERLINETYPE | \
    CFM_WEIGHT | CFM_REVAUTHOR | CFM_SPACING | CFM_KERNING | CFM_STYLE | CFM_ANIMATION)

/* Character formatting effects */
#define CFE_BOLD            0x00000001L
#define CFE_ITALIC          0x00000002L
#define CFE_UNDERLINE       0x00000004L
#define CFE_STRIKEOUT       0x00000008L
#define CFE_PROTECTED       0x00000010L
#define CFE_LINK            0x00000020L
#define CFE_SUBSCRIPT       0x00010000L
#define CFE_SUPERSCRIPT     0x00020000L
#define CFE_AUTOCOLOR       0x40000000L
#define CFE_SMALLCAPS       CFM_SMALLCAPS
#define CFE_ALLCAPS         CFM_ALLCAPS
#define CFE_HIDDEN          CFM_HIDDEN
#define CFE_OUTLINE         CFM_OUTLINE
#define CFE_SHADOW          CFM_SHADOW
#define CFE_EMBOSS          CFM_EMBOSS
#define CFE_IMPRINT         CFM_IMPRINT
#define CFE_DISABLED        CFM_DISABLED
#define CFE_REVISED         CFM_REVISED
#define CFE_AUTOBACKCOLOR   CFM_BACKCOLOR

/* Character formatting underline types */
#define CFU_CF1UNDERLINE                0xFF
#define CFU_INVERT                      0xFE
#define CFU_UNDERLINETHICKLONGDASH      18
#define CFU_UNDERLINETHICKDOTTED        17
#define CFU_UNDERLINETHICKDASHDOTDOT    16
#define CFU_UNDERLINETHICKDASHDOT       15
#define CFU_UNDERLINETHICKDASH          14
#define CFU_UNDERLINELONGDASH           13
#define CFU_UNDERLINEHEAVYWAVE          12
#define CFU_UNDERLINEDOUBLEWAVE         11
#define CFU_UNDERLINEHAIRLINE           10
#define CFU_UNDERLINETHICK              9
#define CFU_UNDERLINEWAVE               8
#define CFU_UNDERLINEDASHDOTDOT         7
#define CFU_UNDERLINEDASHDOT            6
#define CFU_UNDERLINEDASH               5
#define CFU_UNDERLINEDOTTED             4
#define CFU_UNDERLINEDOUBLE             3
#define CFU_UNDERLINEWORD               2
#define CFU_UNDERLINE                   1
#define CFU_UNDERLINENONE               0

/* Character formatting y-height special value */
#define yHeightCharPtsMost  1638

/* EM_SETCHARFORMAT flags */
#define SCF_DEFAULT         0x0000
#define SCF_SELECTION       0x0001
#define SCF_WORD            0x0002
#define SCF_ALL             0x0004
#define SCF_USEUIRULES      0x0008
#define SCF_ASSOCIATEFONT   0x0010
#define SCF_NOKBUPDATE      0x0020
#define SCF_ASSOCIATEFONT2  0x0040

/* Stream formats */
#define SF_TEXT                 0x0001
#define SF_RTF                  0x0002
#define SF_RTFNOOBJS            0x0003
#define SF_TEXTIZED             0x0004
#define SF_UNICODE              0x0010
#define SF_UNICODEPAGE          0x0020
#define SF_NCRFORNONASCII       0x0040
#define SFF_WRITEXTRAPAR        0x0080
#define SF_RTFVAL               0x0700
#define SFF_PWD                 0x0800
#define SFF_KEEPDOCINFO         0x1000
#define SFF_PERSISTVIEWSCALE    0x2000
#define SFF_PLAINRTF            0x4000
#define SFF_SELECTION           0x8000

/* Paragraph formatting constants */
#define MAX_TAB_STOPS   32
#define MAX_TABLE_CELLS 63
#define lDefaultTab     720

/* Paragraph formatting masks */
#define PFM_STARTINDENT         0x00000001L
#define PFM_RIGHTINDENT         0x00000002L
#define PFM_OFFSET              0x00000004L
#define PFM_ALIGNMENT           0x00000008L
#define PFM_TABSTOPS            0x00000010L
#define PFM_NUMBERING           0x00000020L
#define PFM_SPACEBEFORE         0x00000040L
#define PFM_SPACEAFTER          0x00000080L
#define PFM_LINESPACING         0x00000100L
#define PFM_STYLE               0x00000400L
#define PFM_BORDER              0x00000800L
#define PFM_SHADING             0x00001000L
#define PFM_NUMBERINGSTYLE      0x00002000L
#define PFM_NUMBERINGTAB        0x00004000L
#define PFM_NUMBERINGSTART      0x00008000L
#define PFM_RTLPARA             0x00010000L
#define PFM_KEEP                0x00020000L
#define PFM_KEEPNEXT            0x00040000L
#define PFM_PAGEBREAKBEFORE     0x00080000L
#define PFM_NOLINENUMBER        0x00100000L
#define PFM_NOWINDOWCONTROL     0x00200000L
#define PFM_DONOTHYPHEN         0x00400000L
#define PFM_SIDEBYSIDE          0x00800000L
#define PFM_COLLAPSED           0x01000000L
#define PFM_OUTLINELEVEL        0x02000000L
#define PFM_BOX                 0x04000000L
#define PFM_TABLEROWDELIMITER   0x10000000L
#define PFM_TEXTWRAPPINGBREAK   0x20000000L
#define PFM_TABLE               0x40000000L
#define PFM_OFFSETINDENT        0x80000000L
#define PFM_ALL \
    (PFM_STARTINDENT | PFM_RIGHTINDENT | PFM_OFFSET | PFM_ALIGNMENT | PFM_TABSTOPS | \
    PFM_NUMBERING | PFM_OFFSETINDENT | PFM_RTLPARA)
#define PFM_EFFECTS \
    (PFM_RTLPARA | PFM_KEEP | PFM_KEEPNEXT | PFM_TABLE | PFM_PAGEBREAKBEFORE | \
    PFM_NOLINENUMBER | PFM_NOWINDOWCONTROL | PFM_DONOTHYPHEN | PFM_SIDEBYSIDE | \
    PFM_TABLE | PFM_TABLEROWDELIMITER)
#define PFM_ALL2 \
    (PFM_ALL | PFM_EFFECTS | PFM_SPACEBEFORE | PFM_SPACEAFTER | PFM_LINESPACING | \
    PFM_STYLE | PFM_SHADING | PFM_BORDER | PFM_NUMBERINGTAB | PFM_NUMBERINGSTART | \
    PFM_NUMBERINGSTYLE)

/* Paragraph formatting effects */
#define PFE_RTLPARA             (PFM_RTLPARA >> 16)
#define PFE_KEEP                (PFM_KEEP >> 16)
#define PFE_KEEPNEXT            (PFM_KEEPNEXT >> 16)
#define PFE_PAGEBREAKBEFORE     (PFM_PAGEBREAKBEFORE >> 16)
#define PFE_NOLINENUMBER        (PFM_NOLINENUMBER >> 16)
#define PFE_NOWIDOWCONTROL      (PFM_NOWINDOWCONTROL >> 16)
#define PFE_DONOTHYPHEN         (PFM_DONOTHYPHEN >> 16)
#define PFE_SIDEBYSIDE          (PFM_SIDEBYSIDE >> 16)
#define PFE_TEXTWRAPPINGBREAK   (PFM_TEXTWRAPPINGBREAK >> 16)
#define PFE_COLLAPSED           (PFM_COLLAPSED >> 16)
#define PFE_BOX                 (PFM_BOX >> 16)
#define PFE_TABLE               (PFM_TABLE >> 16)
#define PFE_TABLEROWDELIMITER   (PFM_TABLEROWDELIMITER >> 16)

/* Paragraph formatting numbering values */
#define PFN_BULLET      1
#define PFN_ARABIC      2
#define PFN_LCLETTER    3
#define PFN_UCLETTER    4
#define PFN_LCROMAN     5
#define PFN_UCROMAN     6

/* Paragraph formatting numbering styles */
#define PFNS_PAREN      0x0000
#define PFNS_PARENS     0x0100
#define PFNS_PERIOD     0x0200
#define PFNS_PLAIN      0x0300
#define PFNS_NONUMBER   0x0400
#define PFNS_NEWNUMBER  0x8000

/* Paragraph formatting alignment values */
#define PFA_LEFT                1
#define PFA_RIGHT               2
#define PFA_CENTER              3
#define PFA_JUSTIFY             4
#define PFA_FULL_INTERWORD      4
#define PFA_FULL_INTERLETTER    5
#define PFA_FULL_SCALED         6
#define PFA_FULL_GLYPHS         7
#define PFA_SNAP_GRID           8

/* Selection types */
#define SEL_EMPTY       0x0000
#define SEL_TEXT        0x0001
#define SEL_OBJECT      0x0002
#define SEL_MULTICHAR   0x0004
#define SEL_MULTIOBJECT 0x0008

/* IRichEditOleCallback::GetContextMenu() flags */
#define GCM_RIGHTMOUSEDROP  0x8000

/* OLE operations */
#define OLEOP_DOVERB    1L

/* Rich text clipboard formats */
#define CF_RTF          TEXT("Rich Text Format")
#define CF_RTFNOOBJS    TEXT("Rich Text Format Without Objects")
#define CF_RETEXTOBJ    TEXT("RichEdit Text and Objects")

/* Set text flags */
#define ST_DEFAULT      0
#define ST_KEEPUNDO     1
#define ST_SELECTION    2
#define ST_NEWCHARS     4

/* Get text flags */
#define GT_DEFAULT      0
#define GT_USECRLF      1
#define GT_SELECTION    2
#define GT_RAWTEXT      4
#define GT_NOHIDDENTEXT 8

/* Get text length flags */
#define GTL_DEFAULT     0
#define GTL_USECRLF     1
#define GTL_PRECISE     2
#define GTL_CLOSE       4
#define GTL_NUMCHARS    8
#define GTL_NUMBYTES    16

/* Bidirectional option masks */
#if (_RICHEDIT_VER == 0x0100)
    #define BOM_DEFPARADIR      0x0001
    #define BOM_PLAINTEXT       0x0002
#endif
#define BOM_NEUTRALOVERRIDE     0x0004
#define BOM_CONTEXTREADING      0x0008
#define BOM_CONTEXTALIGNMENT    0x0010
#define BOM_LEGACYBIDICLASS     0x0040

/* Bidirectional option effects */
#if (_RICHEDIT_VER == 0x0100)
    #define BOE_RTLDIR          0x0001
    #define BOE_PLAINTEXT       0x0002
#endif
#define BOE_NEUTRALOVERRIDE     0x0004
#define BOE_CONTEXTREADING      0x0008
#define BOE_CONTEXTALIGNMENT    0x0010
#define BOE_LEGACYBIDICLASS     0x0040

/* EM_FINDTEXT flags */
#define FR_MATCHDIAC        0x20000000L
#define FR_MATCHKASHIDA     0x40000000L
#define FR_MATCHALEFHAMZA   0x80000000L

/* Unicode embedding character */
#ifndef WCH_EMBEDDING
#define WCH_EMBEDDING   0xFFFC
#endif

/* Text modes */
typedef enum tagTextMode {
    TM_PLAINTEXT        = 1,
    TM_RICHTEXT         = 2,
    TM_SINGLELEVELUNDO  = 4,
    TM_MULTILEVELUNDO   = 8,
    TM_SINGLECODEPAGE   = 16,
    TM_MULTICODEPAGE    = 32
} TEXTMODE;

/* IME composition text */
typedef struct _imecomptext {
    LONG    cb;
    DWORD   flags;
} IMECOMPTEXT;

/* Extended word break procedure */
typedef LONG (*EDITWORDBREAKPROCEX)( char *, LONG, BYTE, INT );

/* Character formatting */
typedef struct _charformat {
    UINT        cbSize;
    DWORD       dwMask;
    DWORD       dwEffects;
    LONG        yHeight;
    LONG        yOffset;
    COLORREF    crTextColor;
    BYTE        bCharSet;
    BYTE        bPitchAndFamily;
    char        szFaceName[LF_FACESIZE];
} CHARFORMATA;
typedef struct _charformatw {
    UINT        cbSize;
    DWORD       dwMask;
    DWORD       dwEffects;
    LONG        yHeight;
    LONG        yOffset;
    COLORREF    crTextColor;
    BYTE        bCharSet;
    BYTE        bPitchAndFamily;
    WCHAR       szFaceName[LF_FACESIZE];
} CHARFORMATW;
#if (_RICHEDIT_VER >= 0x0200)
#ifdef UNICODE
typedef CHARFORMATW CHARFORMAT;
#else
typedef CHARFORMATA CHARFORMAT;
#endif
#else
typedef CHARFORMATA CHARFORMAT;
#endif

/* Character formatting (version 2) */
#ifdef __cplusplus
typedef struct _charformat2a : _charformat {
#else
typedef struct _charformat2a {
    UINT        cbSize;
    DWORD       dwMask;
    DWORD       dwEffects;
    LONG        yHeight;
    LONG        yOffset;
    COLORREF    crTextColor;
    BYTE        bCharSet;
    BYTE        bPitchAndFamily;
    char        szFaceName[LF_FACESIZE];
#endif
    WORD        wWeight;
    SHORT       sSpacing;
    COLORREF    crBackColor;
    LCID        lcid;
    DWORD       dwReserved;
    SHORT       sStyle;
    WORD        wKerning;
    BYTE        bUnderlineType;
    BYTE        bAnimation;
    BYTE        bRevAuthor;
} CHARFORMAT2A;
#ifdef __cplusplus
typedef struct _charformat2w : _charformatw {
#else
typedef struct _charformat2w {
    UINT        cbSize;
    DWORD       dwMask;
    DWORD       dwEffects;
    LONG        yHeight;
    LONG        yOffset;
    COLORREF    crTextColor;
    BYTE        bCharSet;
    BYTE        bPitchAndFamily;
    WCHAR       szFaceName[LF_FACESIZE];
#endif
    WORD        wWeight;
    SHORT       sSpacing;
    COLORREF    crBackColor;
    LCID        lcid;
    DWORD       dwReserved;
    SHORT       sStyle;
    WORD        wKerning;
    BYTE        bUnderlineType;
    BYTE        bAnimation;
    BYTE        bRevAuthor;
} CHARFORMAT2W;
#ifdef UNICODE
typedef CHARFORMAT2W    CHARFORMAT2;
#else
typedef CHARFORMAT2A    CHARFORMAT2;
#endif

/* Character range */
typedef struct _charrange {
    LONG    cpMin;
    LONG    cpMax;
} CHARRANGE;

/* Text range */
typedef struct _textrange {
    CHARRANGE   chrg;
    LPSTR       lpstrText;
} TEXTRANGEA;
typedef struct _textrangew {
    CHARRANGE   chrg;
    LPWSTR      lpstrText;
} TEXTRANGEW;
#if (_RICHEDIT_VER >= 0x0200)
#ifdef UNICODE
typedef TEXTRANGEW  TEXTRANGE;
#else
typedef TEXTRANGEA  TEXTRANGE;
#endif
#else
typedef TEXTRANGEA  TEXTRANGE;
#endif

/* Edit stream callback */
typedef DWORD (CALLBACK *EDITSTREAMCALLBACK)( DWORD_PTR, LPBYTE, LONG, LONG * );

/* Edit stream */
typedef struct _editstream {
    DWORD_PTR           dwCookie;
    DWORD               dwError;
    EDITSTREAMCALLBACK  pfnCallback;
} EDITSTREAM;

/* Find text parameters */
typedef struct _findtext {
    CHARRANGE   chrg;
    LPCSTR      lpstrText;
} FINDTEXTA;
typedef struct _findtextw {
    CHARRANGE   chrg;
    LPCWSTR     lpstrText;
} FINDTEXTW;
#if (_RICHEDIT_VER >= 0x0200)
#ifdef UNICODE
typedef FINDTEXTW   FINDTEXT;
#else
typedef FINDTEXTA   FINDTEXT;
#endif
#else
typedef FINDTEXTA   FINDTEXT;
#endif

/* Find text parameters (extended version) */
typedef struct _findtextexa {
    CHARRANGE   chrg;
    LPCSTR      lpstrText;
    CHARRANGE   chrgText;
} FINDTEXTEXA;
typedef struct _findtextexw {
    CHARRANGE   chrg;
    LPCWSTR     lpstrText;
    CHARRANGE   chrgText;
} FINDTEXTEXW;
#if (_RICHEDIT_VER >= 0x0200)
#ifdef UNICODE
typedef FINDTEXTEXW FINDTEXTEX;
#else
typedef FINDTEXTEXA FINDTEXTEX;
#endif
#else
typedef FINDTEXTEXA FINDTEXTEX;
#endif

/* Format range parameters */
typedef struct _formatrange {
    HDC         hdc;
    HDC         hdcTarget;
    RECT        rc;
    RECT        rcPage;
    CHARRANGE   chrg;
} FORMATRANGE;

/* Paragraph formatting */
typedef struct _paraformat {
    UINT    cbSize;
    DWORD   dwMask;
    WORD    wNumbering;
    WORD    wEffects;
    LONG    dxStartIndent;
    LONG    dxRightIndent;
    LONG    dxOffset;
    WORD    wAlignment;
    SHORT   cTabCount;
    LONG    rgxTabs[MAX_TAB_STOPS];
} PARAFORMAT;

/* Paragraph formatting (version 2) */
#ifdef __cplusplus
typedef struct _paraformat2 : _paraformat {
#else
typedef struct _paraformat2 {
    UINT    cbSize;
    DWORD   dwMask;
    WORD    wNumbering;
    WORD    wEffects;
    LONG    dxStartIndent;
    LONG    dxRightIndent;
    LONG    dxOffset;
    WORD    wAlignment;
    SHORT   cTabCount;
    LONG    rgxTabs[MAX_TAB_STOPS];
#endif
    LONG    dySpaceBefore;
    LONG    dySpaceAfter;
    LONG    dyLineSpacing;
    SHORT   sStyle;
    BYTE    bLineSpacingRule;
    BYTE    bOutlineLevel;
    WORD    wShadingWeight;
    WORD    wShadingStyle;
    WORD    wNumberingStart;
    WORD    wNumberingStyle;
    WORD    wNumberingTab;
    WORD    wBorderSpace;
    WORD    wBorderWidth;
    WORD    wBorders;
} PARAFORMAT2;

/* Notification header */
#ifndef WM_NOTIFY
#define WM_NOTIFY   0x004E
typedef struct _nmhdr {
    HWND    hwndFrom;
    UINT    idFrom;
    UINT    code;
} NMHDR;
#endif

/* Message filter parameters */
typedef struct _msgfilter {
    NMHDR   nmhdr;
    UINT    msg;
    WPARAM  wParam;
    LPARAM  lParam;
} MSGFILTER;

/* Request resize parameters */
typedef struct _reqresize {
    NMHDR   nmhdr;
    RECT    rc;
} REQRESIZE;

/* Selection change parameters */
typedef struct _selchange {
    NMHDR       nmhdr;
    CHARRANGE   chrg;
    WORD        seltyp;
} SELCHANGE;

/* EN_DROPFILES parameters */
typedef struct _endropfiles {
    NMHDR   nmhdr;
    HANDLE  hDrop;
    LONG    cp;
    BOOL    fProtected;
} ENDROPFILES;

/* EN_PROTECTED parameters */
typedef struct _enprotected {
    NMHDR       nmhdr;
    UINT        msg;
    WPARAM      wParam;
    LPARAM      lParam;
    CHARRANGE   chrg;
} ENPROTECTED;

/* EN_SAVECLIPBOARD parameters */
typedef struct _ensaveclipboard {
    NMHDR   nmhdr;
    LONG    cObjectCount;
    LONG    cch;
} ENSAVECLIPBOARD;

/* EN_OLEOPFAILED parameters */
typedef struct _enoleopfailed {
    NMHDR   nmhdr;
    LONG    iob;
    LONG    lOper;
    HRESULT hr;
} ENOLEOPFAILED;

/* Object positions */
typedef struct _objectpositions {
    NMHDR   nmhdr;
    LONG    cObjectCount;
    LONG    *pcpPositions;
} OBJECTPOSITIONS;

/* EN_LINK parameters */
typedef struct _enlink {
    NMHDR       nmhdr;
    UINT        msg;
    WPARAM      wParam;
    LPARAM      lParam;
    CHARRANGE   chrg;
} ENLINK;

/* EN_LOWFIRTF parameters */
typedef struct _enlowfirtf {
    NMHDR   nmhdr;
    char    *szControl;
} ENLOWFIRTF;

/* EN_CORRECTTEXT parameters */
typedef struct _encorrecttext {
    NMHDR       nmhdr;
    CHARRANGE   chrg;
    WORD        seltyp;
} ENCORRECTTEXT;

/* Punctuation parameters */
typedef struct _punctuation {
    UINT    iSize;
    LPSTR   szPunctuation;
} PUNCTUATION;

/* Component color parameters */
typedef struct _compcolor {
    COLORREF    crText;
    COLORREF    crBackground;
    DWORD       dwEffects;
} COMPCOLOR;

/* Rich edit paste special parameters */
typedef struct _repastespecial {
    DWORD       dwAspect;
    DWORD_PTR   dwParam;
} REPASTESPECIAL;

/* Undo name identifiers */
typedef enum _undonameid {
    UID_UNKNOWN     = 0,
    UID_TYPING      = 1,
    UID_DELETE      = 2,
    UID_DRAGDROP    = 3,
    UID_CUT         = 4,
    UID_PASTE       = 5,
    UID_AUTOCORRECT = 6
} UNDONAMEID;

/* EM_SETTEXTEX parameters */
typedef struct _settextex {
    DWORD   flags;
    UINT    codepage;
} SETTEXTEX;

/* EM_GETTEXTEX parameters */
typedef struct _gettextex {
    DWORD   cb;
    DWORD   flags;
    UINT    codepage;
    LPCSTR  lpDefaultChar;
    LPBOOL  lpUsedDefChar;
} GETTEXTEX;

/* EM_GETTEXTLENGTHEX parameters */
typedef struct _gettextlengthex {
    DWORD   flags;
    UINT    codepage;
} GETTEXTLENGTHEX;

/* Bidirectional options */
typedef struct _bidioptions {
    UINT    cbSize;
    WORD    wMask;
    WORD    wEffects;
} BIDIOPTIONS;

/* Hyphenation kinds */
typedef enum tagKHYPH {
    khyphNil            = 0,
    khyphNormal         = 1,
    hhyphAddBefore      = 2,
    khyphChangeBefore   = 3,
    khyphDeleteBefore   = 4,
    khyphChangeAfter    = 5,
    khyphDelAndChange   = 6
} KHYPH;

/* Hyphenation result */
typedef struct hyphresult {
    KHYPH   khyph;
    long    ichHyph;
    WCHAR   chHyph;
} HYPHRESULT;

/* Hyphenation information */
typedef struct tagHyphenateInfo {
    SHORT   cbSize;
    SHORT   dxHyphenateZone;
    void    (WINAPI *pfnHyphenate)( WCHAR *, LANGID, long, HYPHRESULT * );
} HYPHENATEINFO;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _RICHEDIT_ */
