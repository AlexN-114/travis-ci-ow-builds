/*
 *  arch/i386/signal.h
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

#define SIG_ERR     ((__sig_func)-1)
#define SIG_DFL     ((__sig_func)0)
#define SIG_IGN     ((__sig_func)1)

#define SIGHUP      1   /* hangup */
#define SIGINT      2   /* interrupt */
#define SIGQUIT     3   /* quit */
#define SIGILL      4   /* illegal instruction (not reset when caught) */
#define SIGTRAP     5   /* trace trap (not reset when caught) */
#define SIGIOT      6   /* IOT instruction */
#define SIGABRT     6   /* used by abort */
#define SIGBUS      7   /* bus error */
#define SIGFPE      8   /* floating point exception */
#define SIGKILL     9   /* kill (cannot be caught or ignored) */
#define SIGUSR1     10  /* user defined signal 1 */
#define SIGSEGV     11  /* segmentation violation */
#define SIGUSR2     12  /* user defined signal 2 */
#define SIGPIPE     13  /* write on pipe with no reader */
#define SIGALRM     14  /* real-time alarm clock */
#define SIGTERM     15  /* software termination signal from kill */
#define SIGCHLD     17  /* death of child */
#define SIGCONT     18  /* continue a stopped process */
#define SIGSTOP     19  /* sendable stop signal not from tty */
#define SIGTSTP     20  /* stop signal from tty */
#define SIGTTIN     21  /* attempted background tty read */
#define SIGTTOU     22  /* attempted background tty write */
#define SIGURG      23  /* urgent condition on I/O channel */
#define SIGXCPU     24  /* CPU time limit exceeded */
#define SIGXFSZ     25  /* file size limit exceeded */
#define SIGVTALRM   26  /* virtual alarm clock */
#define SIGPROF     27  /* profiler */
#define SIGWINCH    28  /* window change */
#define SIGIO       29  /* Asynchronus I/O */
#define SIGPOLL     29  /* System V name for SIGIO */
#define SIGPWR      30  /* power-fail restart */
#define SIGSYS      31  /* bad argument to system call */
#define _SIGMAX     32

#define SIGRTMIN    32
#define SIGRTMAX    _NSIG

/* sigprocmask() flags */
#define SIG_BLOCK   0
#define SIG_UNBLOCK 1
#define SIG_SETMASK 2

#define SA_NOCLDSTOP 0x00000001
#define SA_NOCLDWAIT 0x00000002
#define SA_SIGINFO   0x00000004
#define SA_RESTORER  0x04000000
#define SA_ONSTACK   0x08000000
#define SA_RESTART   0x10000000
#define SA_INTERRUPT 0x20000000
#define SA_NODEFER   0x40000000
#define SA_RESETHAND 0x80000000

#define SA_NOMASK    SA_NODEFER
#define SA_ONESHOT   SA_RESETHAND

