/*
 *  largeint.h  Large integer functions
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

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Functions in LARGEINT.LIB */
LARGE_INTEGER WINAPI    ConvertLongToLargeInteger( LONG );
LARGE_INTEGER WINAPI    ConvertUlongToLargeInteger( ULONG );
LARGE_INTEGER WINAPI    EnlargedIntegerMultiply( LONG, LONG );
ULONG WINAPI            EnlargedUnsignedDivide( ULARGE_INTEGER, ULONG, PULONG );
LARGE_INTEGER WINAPI    EnlargedUnsignedMultiply( ULONG, ULONG );
LARGE_INTEGER WINAPI    ExtendedIntegerMultiply( LARGE_INTEGER, LONG );
LARGE_INTEGER WINAPI    ExtendedLargeIntegerDivide( LARGE_INTEGER, ULONG, PULONG );
LARGE_INTEGER WINAPI    ExtendedMagicDivide( LARGE_INTEGER, LARGE_INTEGER, CCHAR );
LARGE_INTEGER WINAPI    LargeIntegerAdd( LARGE_INTEGER, LARGE_INTEGER );
LARGE_INTEGER WINAPI    LargeIntegerArithmeticShift( LARGE_INTEGER, CCHAR );
LARGE_INTEGER WINAPI    LargeIntegerDivide( LARGE_INTEGER, LARGE_INTEGER, PLARGE_INTEGER );
LARGE_INTEGER WINAPI    LargeIntegerNegate( LARGE_INTEGER );
LARGE_INTEGER WINAPI    LargeIntegerShiftLeft( LARGE_INTEGER, CCHAR );
LARGE_INTEGER WINAPI    LargeIntegerShiftRight( LARGE_INTEGER, CCHAR );
LARGE_INTEGER WINAPI    LargeIntegerSubtract( LARGE_INTEGER, LARGE_INTEGER );

/* Functions implemented as macros */
#define LargeIntegerAnd( p1, p2, p3 ) \
    { \
        (p1).HighPart = (p2).HighPart & (p3).HighPart; \
        (p1).LowPart = (p2).LowPart & (p3).LowPart; \
    }
#define LargeIntegerEqualTo( p1, p2 ) \
    (!(((p1).LowPart ^ (p2).LowPart) | ((p1).HighPart ^ (p2).HighPart)))
#define LargeIntegerEqualToZero( x ) \
    (!((x).LowPart | (x).HighPart))
#define LargeIntegerGreaterThan( p1, p2 ) \
    ((((p1).HighPart == (p2).HighPart) && ((p1).LowPart > (p2).LowPart)) || \
    ((p1).HighPart > (p2).HighPart))
#define LargeIntegerGreaterThanOrEqualTo( p1, p2 ) \
    ((((p1).HighPart == (p2).HighPart) && ((p1).LowPart >= (p2).LowPart)) || \
    ((p1).HighPart > (p2).HighPart))
#define LargeIntegerGreaterThanOrEqualToZero( x ) \
    ((x).HighPart >= 0)
#define LargeIntegerGreaterThanZero( x ) \
    ((((x).HighPart == 0) && ((x).LowPart > 0) || ((x).HighPart > 0))
#define LargeIntegerLessThan( p1, p2 ) \
    ((((p1).HighPart == (p2).HighPart) && ((p1).LowPart < (p2).LowPart)) || \
    ((p2).HighPart < (p2).HighPart))
#define LargeIntegerLessThanOrEqualTo( p1, p2 ) \
    ((((p1).HighPart == (p2).HighPart) && ((p1).LowPart <= (p2).LowPart)) || \
    ((p2).HighPart < (p2).HighPart))
#define LargeIntegerLessThanOrEqualToZero( x ) \
    (((x).HighPart < 0) || !((x).LowPart | (x).HighPart))
#define LargeIntegerLessThanZero( x ) \
    ((x).HighPart < 0)
#define LargeIntegerNotEqualTo( p1, p2 ) \
    (((p1).LowPart ^ (p2).LowPart) | ((p1).HighPart ^ (p2).HighPart))
#define LargeIntegerNotEqualToZero( x ) \
    ((x).LowPart | (x).HighPart)

#ifdef __cplusplus
} /* extern "C" */
#endif
