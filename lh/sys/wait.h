/*
 *  sys/wait.h  POSIX Standard: 3.2.1 Wait for Process Termination
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2017 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */
#ifndef _SYS_WAIT_H_INCLUDED
#define _SYS_WAIT_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _SIGNAL_H_INCLUDED
 #include <signal.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#pragma pack( __push, 4 )

/* From <bits/flags.h> */

/* Bits in the third argument to `waitpid'.  */
#define WNOHANG         1           /* Don't block waiting.  */
#define WUNTRACED       2           /* Report status of stopped children.  */

#define __WALL          0x40000000 /* Wait for any child.  */
#define __WCLONE        0x80000000 /* Wait for cloned process.  */

/* From <bits/waitstatus.h> */

#define __WEXITSTATUS(status)   (((status) & 0xff00) >> 8)
#define __WTERMSIG(status)      ((status) & 0x7f)
#define __WSTOPSIG(status)      __WEXITSTATUS(status)
#define __WIFEXITED(status)     (__WTERMSIG(status) == 0)
#define __WIFSIGNALED(status)   (!__WIFSTOPPED(status) && !__WIFEXITED(status))
#define __WIFSTOPPED(status)    (((status) & 0xff) == 0x7f)
#define __WCOREDUMP(status)     ((status) & __WCOREFLAG)
#define __W_EXITCODE(ret, sig)  ((ret) << 8 | (sig))
#define __W_STOPCODE(sig)       ((sig) << 8 | 0x7f)
#define __WCOREFLAG             0x80

/* Remainder of <sys/wait.h> */

#define __WAIT_INT(status)      (status)
#define __WAIT_STATUS           int *
#define __WAIT_STATUS_DEFN      int *

#define WEXITSTATUS(status)     __WEXITSTATUS(__WAIT_INT(status))
#define WTERMSIG(status)        __WTERMSIG(__WAIT_INT(status))
#define WSTOPSIG(status)        __WSTOPSIG(__WAIT_INT(status))
#define WIFEXITED(status)       __WIFEXITED(__WAIT_INT(status))
#define WIFSIGNALED(status)     __WIFSIGNALED(__WAIT_INT(status))
#define WIFSTOPPED(status)      __WIFSTOPPED(__WAIT_INT(status))

/* Wait for a child to die.  When one does, put its status in *STAT_LOC
 * and return its process ID.  For errors, return (pid_t) -1.
 */
_WCRTLINK extern pid_t wait( __WAIT_STATUS __stat_loc );

/* Wait for a child matching PID to die.
 * If PID is greater than 0, match any process whose process ID is PID.
 * If PID is (pid_t) -1, match any process.
 * If PID is (pid_t) 0, match any process with the
 * same process group as the current process.
 * If PID is less than -1, match any process whose
 * process group is the absolute value of PID.
 * If the WNOHANG bit is set in OPTIONS, and that child
 * is not already dead, return (pid_t) 0.  If successful,
 * return PID and store the dead child's status in STAT_LOC.
 * Return (pid_t) -1 for errors.  If the WUNTRACED bit is
 * set in OPTIONS, return status for stopped children; otherwise don't.
 */
_WCRTLINK extern pid_t waitpid( pid_t __pid, int *__stat_loc, int __options );

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* !_SYS_WAIT_H_INCLUDED */
