/*
 *  exe386.h    Linear Executable (LX) format.
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

#ifndef __EXE386__
#define __EXE386__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

#define BITPERWORD      16
#define BITPERBYTE      8
#define OBJPAGELEN      4096
#define E32MAGIC1       'L'
#define E32MAGIC2       'X'
#define E32MAGIC        0x584c
#define E32RESBYTES1    0
#define E32RESBYTES2    0
#define E32RESBYTES3    20
#define E32LEBO         0x00
#define E32BEBO         0x01
#define E32LEWO         0x00
#define E32BEWO         0x01
#define E32LEVEL        0L
#define E32CPU286       0x001
#define E32CPU386       0x002
#define E32CPU486       0x003

#define E32_MAGIC1(x)       (x).e32_magic[0]
#define E32_MAGIC2(x)       (x).e32_magic[1]
#define E32_BORDER(x)       (x).e32_border
#define E32_WORDER(x)       (x).e32_worder
#define E32_LEVEL(x)        (x).e32_level
#define E32_CPU(x)          (x).e32_cpu
#define E32_OS(x)           (x).e32_os
#define E32_VER(x)          (x).e32_ver
#define E32_MFLAGS(x)       (x).e32_mflags
#define E32_MPAGES(x)       (x).e32_mpages
#define E32_STARTOBJ(x)     (x).e32_startobj
#define E32_EIP(x)          (x).e32_eip
#define E32_STACKOBJ(x)     (x).e32_stackobj
#define E32_ESP(x)          (x).e32_esp
#define E32_PAGESIZE(x)     (x).e32_pagesize
#define E32_PAGESHIFT(x)    (x).e32_pageshift
#define E32_FIXUPSIZE(x)    (x).e32_fixupsize
#define E32_FIXUPSUM(x)     (x).e32_fixupsum
#define E32_LDRSIZE(x)      (x).e32_ldrsize
#define E32_LDRSUM(x)       (x).e32_ldrsum
#define E32_OBJTAB(x)       (x).e32_objtab
#define E32_OBJCNT(x)       (x).e32_objcnt
#define E32_OBJMAP(x)       (x).e32_objmap
#define E32_ITERMAP(x)      (x).e32_itermap
#define E32_RSRCTAB(x)      (x).e32_rsrctab
#define E32_RSRCCNT(x)      (x).e32_rsrccnt
#define E32_RESTAB(x)       (x).e32_restab
#define E32_ENTTAB(x)       (x).e32_enttab
#define E32_DIRTAB(x)       (x).e32_dirtab
#define E32_DIRCNT(x)       (x).e32_dircnt
#define E32_FPAGETAB(x)     (x).e32_fpagetab
#define E32_FRECTAB(x)      (x).e32_frectab
#define E32_IMPMOD(x)       (x).e32_impmod
#define E32_IMPMODCNT(x)    (x).e32_impmodcnt
#define E32_IMPPROC(x)      (x).e32_impproc
#define E32_PAGESUM(x)      (x).e32_pagesum
#define E32_DATAPAGE(x)     (x).e32_datapage
#define E32_PRELOAD(x)      (x).e32_preload
#define E32_NRESTAB(x)      (x).e32_nrestab
#define E32_CBNRESTAB(x)    (x).e32_cbnrestab
#define E32_NRESSUM(x)      (x).e32_nressum
#define E32_AUTODATA(x)     (x).e32_autodata
#define E32_DEBUGINFO(x)    (x).e32_debuginfo
#define E32_DEBUGLEN(x)     (x).e32_debuglen
#define E32_INSTPRELOAD(x)  (x).e32_instpreload
#define E32_INSTDEMAND(x)   (x).e32_instdemand
#define E32_HEAPSIZE(x)     (x).e32_heapsize
#define E32_STACKSIZE(x)    (x).e32_stacksize

#define E32NOTP     0x8000L
#define E32NOLOAD   0x2000L
#define E32PMAPI    0x0300L
#define E32PMW      0x0200L
#define E32NOPMW    0x0100L
#define E32NOEXTFIX 0x0020L
#define E32NOINTFIX 0x0010L
#define E32SYSDLL   0x0008L
#define E32LIBINIT  0x0004L
#define E32LIBTERM  0x40000000L
#define E32APPMASK  0x0300L

#define E32PROTDLL      0x10000L
#define E32DEVICE       0x20000L
#define E32MODEXE       0x00000L
#define E32MODDLL       0x08000L
#define E32MODPROTDLL   0x18000L
#define E32MODPDEV      0x20000L
#define E32MODVDEV      0x28000L
#define E32MODMASK      0x38000L
#define E32NOTMPSAFE    0x80000L

#define RINTSIZE16      8
#define RINTSIZE32      10
#define RORDSIZE        8
#define RNAMSIZE16      8
#define RNAMSIZE32      10
#define RADDSIZE16      10
#define RADDSIZE32      12

#define R32_SOFF(x)      (x).r32_soff
#define R32_OBJNO(x)     (x).r32_objmod
#define R32_MODORD(x)    (x).r32_objmod
#define R32_OFFSET16(x)  (x).r32_target.intref.offset16
#define R32_OFFSET32(x)  (x).r32_target.intref.offset32
#define R32_PROCOFF16(x) (x).r32_target.extref.proc.offset16
#define R32_PROCOFF32(x) (x).r32_target.extref.proc.offset32
#define R32_PROCORD(x)   (x).r32_target.extref.ord
#define R32_ENTRY(x)     (x).r32_target.addfix.entry
#define R32_ADDVAL16(x)  (x).r32_target.addfix.addval.offset16
#define R32_ADDVAL32(x)  (x).r32_target.addfix.addval.offset32
#define R32_SRCCNT(x)    (x).r32_srccount
#define R32_CHAIN(x)     (x).r32_chain

#define NRSRCMASK       0x0f
#define NRALIAS         0x10
#define NRCHAIN         0x20

#define NRRENT          0x03

#define NR32BITOFF      0x10
#define NR32BITADD      0x20
#define NR16OBJMOD      0x40
#define NR8BITORD       0x80

#define PAGEPERDIR      62
#define LG2DIR          7

#define O32_SIZE(x)     (x).o32_size
#define O32_BASE(x)     (x).o32_base
#define O32_FLAGS(x)    (x).o32_flags
#define O32_PAGEMAP(x)  (x).o32_pagemap
#define O32_MAPSIZE(x)  (x).o32_mapsize
#define O32_RESERVED(x) (x).o32_reserved

#define OBJREAD     0x0001L
#define OBJWRITE    0x0002L
#define OBJRSRC     0x0008L
#define OBJINVALID  0x0080L
#define LNKNONPERM  0x0600L
#define OBJNONPERM  0x0000L
#define OBJPERM     0x0100L
#define OBJRESIDENT 0x0200L
#define OBJCONTIG   0x0300L
#define OBJDYNAMIC  0x0400L
#define OBJTYPEMASK 0x0700L
#define OBJALIAS16  0x1000L
#define OBJBIGDEF   0x2000L
#define OBJIOPL     0x8000L

#if FOR_EXEHDR

#define OBJDISCARD  0x0010L
#define OBJSHARED   0x0020L
#define OBJPRELOAD  0x0040L
#define OBJEXEC     0x0004L
#define OBJCONFORM  0x4000L

#else

#define NSDISCARD   0x0010L
#define NSMOVE      NSDISCARD
#define NSSHARED    0x0020L
#define NSPRELOAD   0x0040L
#define NSEXRD      0x0004L
#define NSCONFORM   0x4000L

#endif

#define GETPAGEIDX(x)   ((x).o32_pagedataoffset)
#define PUTPAGEIDX(x,i) ((x).o32_pagedataoffset = ((unsigned long)(i)))
#define PUTPAGESIZ(x,i) ((x).o32_pagesize = ((unsigned int)(i)))
#define GETPAGESIZ(x)   ((x).o32_pagesize)
#define PAGEFLAGS(x)    (x).o32_pageflags

#define VALID       0x0000
#define ITERDATA    0x0001
#define INVALID     0x0002
#define ZEROED      0x0003
#define RANGE       0x0004
#define ITERDATA2   0x0005

#define B32_CNT(x)      (x).b32_cnt
#define B32_TYPE(x)     (x).b32_type
#define B32_OBJ(x)      (x).b32_obj

#define E32_EFLAGS(x)   (x).e32_flags
#define E32_OFFSET16(x) (x).e32_variant.e32_offset.offset16
#define E32_OFFSET32(x) (x).e32_variant.e32_offset.offset32
#define E32_GATEOFF(x)  (x).e32_variant.e32_callgate.offset
#define E32_GATE(x)     (x).e32_variant.e32_callgate.callgate
#define E32_MODORD(x)   (x).e32_variant.e32_fwd.modord
#define E32_VALUE(x)    (x).e32_variant.e32_fwd.value

#define FIXENT16    3
#define FIXENT32    5
#define GATEENT16   5
#define FWDENT      7

#define EMPTY       0x00
#define ENTRY16     0x01
#define GATE16      0x02
#define ENTRY32     0x03
#define ENTRYFWD    0x04
#define TYPEINFO    0x80

#define E32EXPORT   0x01
#define E32SHARED   0x02
#define E32PARAMS   0xf8

#define FWD_ORDINAL     0x01

#pragma pack(push,1)

struct e32_exe {
    unsigned char   e32_magic[2];
    unsigned char   e32_border;
    unsigned char   e32_worder;
    unsigned long   e32_level;
    unsigned short  e32_cpu;
    unsigned short  e32_os;
    unsigned long   e32_ver;
    unsigned long   e32_mflags;
    unsigned long   e32_mpages;
    unsigned long   e32_startobj;
    unsigned long   e32_eip;
    unsigned long   e32_stackobj;
    unsigned long   e32_esp;
    unsigned long   e32_pagesize;
    unsigned long   e32_pageshift;
    unsigned long   e32_fixupsize;
    unsigned long   e32_fixupsum;
    unsigned long   e32_ldrsize;
    unsigned long   e32_ldrsum;
    unsigned long   e32_objtab;
    unsigned long   e32_objcnt;
    unsigned long   e32_objmap;
    unsigned long   e32_itermap;
    unsigned long   e32_rsrctab;
    unsigned long   e32_rsrccnt;
    unsigned long   e32_restab;
    unsigned long   e32_enttab;
    unsigned long   e32_dirtab;
    unsigned long   e32_dircnt;
    unsigned long   e32_fpagetab;
    unsigned long   e32_frectab;
    unsigned long   e32_impmod;
    unsigned long   e32_impmodcnt;
    unsigned long   e32_impproc;
    unsigned long   e32_pagesum;
    unsigned long   e32_datapage;
    unsigned long   e32_preload;
    unsigned long   e32_nrestab;
    unsigned long   e32_cbnrestab;
    unsigned long   e32_nressum;
    unsigned long   e32_autodata;
    unsigned long   e32_debuginfo;
    unsigned long   e32_debuglen;
    unsigned long   e32_instpreload;
    unsigned long   e32_instdemand;
    unsigned long   e32_heapsize;
    unsigned long   e32_stacksize;
    unsigned char   e32_res3[E32RESBYTES3];
};

typedef union _offset {
    unsigned short  offset16;
    unsigned long   offset32;
} offset;


struct r32_rlc {
    unsigned char   nr_stype;
    unsigned char   nr_flags;
    short           r32_soff;
    unsigned short  r32_objmod;
    union targetid {
        offset          intref;
        union extfixup {
            offset         proc;
            unsigned long  ord;
        } extref;
        struct addfixup {
            unsigned short entry;
            offset         addval;
        } addfix;
    } r32_target;
    unsigned short  r32_srccount;
    unsigned short  r32_chain;
};

typedef struct _OBJPAGEDIR {
    DWORD   next;
    WORD    ht[PAGEPERDIR];
} OBJPAGEDIR;

struct o32_obj {
    unsigned long   o32_size;
    unsigned long   o32_base;
    unsigned long   o32_flags;
    unsigned long   o32_pagemap;
    unsigned long   o32_mapsize;
    unsigned long   o32_reserved;
};


struct o32_map {
    unsigned long   o32_pagedataoffset;
    unsigned short  o32_pagesize;
    unsigned short  o32_pageflags;
};

struct rsrc32 {
    unsigned short  type;
    unsigned short  name;
    unsigned long   cb;
    unsigned short  obj;
    unsigned long   offset;
};

struct LX_Iter {
    unsigned short  LX_nIter;
    unsigned short  LX_nBytes;
    unsigned char   LX_Iterdata;
};

struct b32_bundle {
    unsigned char   b32_cnt;
    unsigned char   b32_type;
    unsigned short  b32_obj;
};

struct e32_entry {
    unsigned char   e32_flags;
    union entrykind {
        offset          e32_offset;
        struct callgate {
            unsigned short  offset;
            unsigned short  callgate;
        }
                        e32_callgate;
        struct fwd {
            unsigned short  modord;
            unsigned long   value;
        } e32_fwd;
    } e32_variant;
};

#pragma pack(pop)

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
