/*
 * Copyright (c) 2003-2012 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 * 
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 * 
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 * 
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */
/*-
 * Copyright (c) 1999,2000,2001 Jonathan Lemon <jlemon@FreeBSD.org>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	$FreeBSD: src/sys/sys/event.h,v 1.5.2.5 2001/12/14 19:21:22 jlemon Exp $
 */

#ifndef _SYS_EVENT_H_
#define _SYS_EVENT_H_

#include <machine/types.h>
#include <sys/cdefs.h>
#include <stdint.h>

#define EVFILT_READ		(-1)
#define EVFILT_WRITE		(-2)
#define EVFILT_AIO		(-3)	/* attached to aio requests */
#define EVFILT_VNODE		(-4)	/* attached to vnodes */
#define EVFILT_PROC		(-5)	/* attached to struct proc */
#define EVFILT_SIGNAL		(-6)	/* attached to struct proc */
#define EVFILT_TIMER		(-7)	/* timers */
#define EVFILT_MACHPORT         (-8)	/* Mach portsets */
#define EVFILT_FS		(-9)	/* Filesystem events */
#define EVFILT_USER             (-10)   /* User events */
					/* (-11) unused */
#define EVFILT_VM		(-12)	/* Virtual memory events */

#define EVFILT_SOCK		(-13)	/* Socket events */
#define EVFILT_MEMORYSTATUS	(-14)	/* Memorystatus events */

#define EVFILT_SYSCOUNT		14
#define EVFILT_THREADMARKER	EVFILT_SYSCOUNT /* Internal use only */

#pragma pack(4)

struct kevent {
	uintptr_t	ident;		/* identifier for this event */
	int16_t		filter;		/* filter for event */
	uint16_t	flags;		/* general flags */
	uint32_t	fflags;		/* filter-specific flags */
	intptr_t	data;		/* filter-specific data */
	void		*udata;		/* opaque user data identifier */
};


struct user64_kevent {
	uint64_t	ident;		/* identifier for this event */
	int16_t		filter;		/* filter for event */
	uint16_t	flags;		/* general flags */
	uint32_t	fflags;		/* filter-specific flags */
	int64_t		data;		/* filter-specific data */
	user_addr_t	udata;		/* opaque user data identifier */
};

struct user32_kevent {
	uint32_t	ident;		/* identifier for this event */
	int16_t		filter;		/* filter for event */
	uint16_t	flags;		/* general flags */
	uint32_t	fflags;		/* filter-specific flags */
	int32_t		data;		/* filter-specific data */
	user32_addr_t	udata;		/* opaque user data identifier */
};


#pragma pack()

struct kevent64_s {
	uint64_t	ident;		/* identifier for this event */
	int16_t		filter;		/* filter for event */
	uint16_t	flags;		/* general flags */
	uint32_t	fflags;		/* filter-specific flags */
	int64_t		data;		/* filter-specific data */
	uint64_t	udata;		/* opaque user data identifier */
	uint64_t	ext[2];		/* filter-specific extensions */
};

#define EV_SET(kevp, a, b, c, d, e, f) do {	\
	struct kevent *__kevp__ = (kevp);	\
	__kevp__->ident = (a);			\
	__kevp__->filter = (b);			\
	__kevp__->flags = (c);			\
	__kevp__->fflags = (d);			\
	__kevp__->data = (e);			\
	__kevp__->udata = (f);			\
} while(0)

#define EV_SET64(kevp, a, b, c, d, e, f, g, h) do {	\
	struct kevent64_s *__kevp__ = (kevp);		\
	__kevp__->ident = (a);				\
	__kevp__->filter = (b);				\
	__kevp__->flags = (c);				\
	__kevp__->fflags = (d);				\
	__kevp__->data = (e);				\
	__kevp__->udata = (f);				\
	__kevp__->ext[0] = (g);				\
	__kevp__->ext[1] = (h);				\
} while(0)

/* actions */
#define EV_ADD		0x0001		/* add event to kq (implies enable) */
#define EV_DELETE	0x0002		/* delete event from kq */
#define EV_ENABLE	0x0004		/* enable event */
#define EV_DISABLE	0x0008		/* disable event (not reported) */
#define EV_RECEIPT	0x0040		/* force EV_ERROR on success, data == 0 */

/* flags */
#define EV_ONESHOT	0x0010		/* only report one occurrence */
#define EV_CLEAR	0x0020		/* clear event state after reporting */
#define EV_DISPATCH     0x0080          /* disable event after reporting */

#define EV_SYSFLAGS	0xF000		/* reserved by system */
#define EV_FLAG0	0x1000		/* filter-specific flag */
#define EV_FLAG1	0x2000		/* filter-specific flag */

/* returned values */
#define EV_EOF		0x8000		/* EOF detected */
#define EV_ERROR	0x4000		/* error, data contains errno */

/*
 * Filter specific flags for EVFILT_READ
 *
 * The default behavior for EVFILT_READ is to make the "read" determination
 * relative to the current file descriptor read pointer. The EV_POLL
 * flag indicates the determination should be made via poll(2) semantics
 * (which always returns true for regular files - regardless of the amount
 * of unread data in the file).
 *
 * On input, EV_OOBAND specifies that only OOB data should be looked for.
 * The returned data count is the number of bytes beyond the current OOB marker.
 *
 * On output, EV_OOBAND indicates that OOB data is present
 * If it was not specified as an input parameter, then the data count is the
 * number of bytes before the current OOB marker. If at the marker, the
 * data count indicates the number of bytes available after it.  In either
 * case, it's the amount of data one could expect to receive next.
 */
#define EV_POLL	EV_FLAG0
#define EV_OOBAND	EV_FLAG1

/*
 * data/hint fflags for EVFILT_USER, shared with userspace
 */

/*
 * On input, NOTE_TRIGGER causes the event to be triggered for output.
 */
#define NOTE_TRIGGER	0x01000000

/*
 * On input, the top two bits of fflags specifies how the lower twenty four 
 * bits should be applied to the stored value of fflags.
 *
 * On output, the top two bits will always be set to NOTE_FFNOP and the
 * remaining twenty four bits will contain the stored fflags value.
 */
#define NOTE_FFNOP      0x00000000              /* ignore input fflags */
#define NOTE_FFAND      0x40000000              /* and fflags */
#define NOTE_FFOR       0x80000000              /* or fflags */
#define NOTE_FFCOPY     0xc0000000              /* copy fflags */
#define NOTE_FFCTRLMASK 0xc0000000              /* mask for operations */
#define NOTE_FFLAGSMASK	0x00ffffff 

/*
 * data/hint fflags for EVFILT_{READ|WRITE}, shared with userspace
 *
 * The default behavior for EVFILT_READ is to make the determination
 * realtive to the current file descriptor read pointer.
 */
#define NOTE_LOWAT	0x00000001		/* low water mark */
/*
 * data/hint fflags for EVFILT_VNODE, shared with userspace
 */
#define	NOTE_DELETE	0x00000001		/* vnode was removed */
#define	NOTE_WRITE	0x00000002		/* data contents changed */
#define	NOTE_EXTEND	0x00000004		/* size increased */
#define	NOTE_ATTRIB	0x00000008		/* attributes changed */
#define	NOTE_LINK	0x00000010		/* link count changed */
#define	NOTE_RENAME	0x00000020		/* vnode was renamed */
#define	NOTE_REVOKE	0x00000040		/* vnode access was revoked */
#define NOTE_NONE	0x00000080		/* No specific vnode event: to test for EVFILT_READ activation*/

/*
 * data/hint fflags for EVFILT_PROC, shared with userspace
 *
 * Please note that EVFILT_PROC and EVFILT_SIGNAL share the same knote list
 * that hangs off the proc structure. They also both play games with the hint
 * passed to KNOTE(). If NOTE_SIGNAL is passed as a hint, then the lower bits
 * of the hint contain the signal. IF NOTE_FORK is passed, then the lower bits
 * contain the PID of the child (but the pid does not get passed through in
 * the actual kevent).
 */
enum {
	eNoteReapDeprecated __deprecated_enum_msg("This kqueue(2) EVFILT_PROC flag is deprecated") = 0x10000000
};

#define	NOTE_EXIT		0x80000000	/* process exited */
#define	NOTE_FORK		0x40000000	/* process forked */
#define	NOTE_EXEC		0x20000000	/* process exec'd */
#define	NOTE_REAP		((unsigned int)eNoteReapDeprecated /* 0x10000000 */)	/* process reaped */
#define	NOTE_SIGNAL		0x08000000	/* shared with EVFILT_SIGNAL */
#define	NOTE_EXITSTATUS		0x04000000	/* exit status to be returned, valid for child process only */
#define	NOTE_EXIT_DETAIL	0x02000000	/* provide details on reasons for exit */

#define	NOTE_PDATAMASK	0x000fffff		/* mask for signal & exit status */
#define	NOTE_PCTRLMASK	(~NOTE_PDATAMASK)

/*
 * If NOTE_EXITSTATUS is present, provide additional info about exiting process.
 */
enum {
	eNoteExitReparentedDeprecated __deprecated_enum_msg("This kqueue(2) EVFILT_PROC flag is no longer sent") = 0x00080000 
};
#define NOTE_EXIT_REPARENTED	((unsigned int)eNoteExitReparentedDeprecated)	/* exited while reparented */

/*
 * If NOTE_EXIT_DETAIL is present, these bits indicate specific reasons for exiting.
 */
#define NOTE_EXIT_DETAIL_MASK		0x00070000
#define	NOTE_EXIT_DECRYPTFAIL		0x00010000 
#define	NOTE_EXIT_MEMORY		0x00020000
#define NOTE_EXIT_CSERROR		0x00040000


/*
 * If NOTE_EXIT_MEMORY is present, these bits indicate specific jetsam condition.
 */
#define NOTE_EXIT_MEMORY_DETAIL_MASK	0xfe000000
#define NOTE_EXIT_MEMORY_VMPAGESHORTAGE	0x80000000	/* jetsam condition: lowest jetsam priority proc killed due to vm page shortage */
#define NOTE_EXIT_MEMORY_VMTHRASHING	0x40000000	/* jetsam condition: lowest jetsam priority proc killed due to vm thrashing */
#define NOTE_EXIT_MEMORY_HIWAT		0x20000000	/* jetsam condition: process reached its high water mark */
#define NOTE_EXIT_MEMORY_PID		0x10000000	/* jetsam condition: special pid kill requested */
#define NOTE_EXIT_MEMORY_IDLE		0x08000000	/* jetsam condition: idle process cleaned up */
#define NOTE_EXIT_MEMORY_VNODE		0X04000000	/* jetsam condition: virtual node kill */
#define NOTE_EXIT_MEMORY_FCTHRASHING	0x02000000	/* jetsam condition: lowest jetsam priority proc killed due to filecache thrashing */


/*
 * data/hint fflags for EVFILT_VM, shared with userspace.
 */
#define NOTE_VM_PRESSURE			0x80000000              /* will react on memory pressure */
#define NOTE_VM_PRESSURE_TERMINATE		0x40000000              /* will quit on memory pressure, possibly after cleaning up dirty state */
#define NOTE_VM_PRESSURE_SUDDEN_TERMINATE	0x20000000		/* will quit immediately on memory pressure */
#define NOTE_VM_ERROR				0x10000000              /* there was an error */


/*
 * data/hint fflags for EVFILT_MEMORYSTATUS, shared with userspace.
 */
#define NOTE_MEMORYSTATUS_PRESSURE_NORMAL	0x00000001	/* system memory pressure has returned to normal */
#define NOTE_MEMORYSTATUS_PRESSURE_WARN		0x00000002	/* system memory pressure has changed to the warning state */
#define NOTE_MEMORYSTATUS_PRESSURE_CRITICAL	0x00000004	/* system memory pressure has changed to the critical state */
#define NOTE_MEMORYSTATUS_LOW_SWAP		0x00000008	/* system is in a low-swap state */

typedef enum vm_pressure_level {
        kVMPressureNormal   = 0,
        kVMPressureWarning  = 1,
        kVMPressureUrgent   = 2,
        kVMPressureCritical = 3,
} vm_pressure_level_t;


/*
 * data/hint fflags for EVFILT_TIMER, shared with userspace.
 * The default is a (repeating) interval timer with the data
 * specifying the timeout interval in milliseconds.
 *
 * All timeouts are implicitly EV_CLEAR events.
 */
#define NOTE_SECONDS	0x00000001		/* data is seconds         */
#define NOTE_USECONDS	0x00000002		/* data is microseconds    */
#define NOTE_NSECONDS	0x00000004		/* data is nanoseconds     */
#define NOTE_ABSOLUTE	0x00000008		/* absolute timeout        */
						/* ... implicit EV_ONESHOT */
#define NOTE_LEEWAY	0x00000010		/* ext[1] holds leeway for power aware timers */
#define NOTE_CRITICAL	0x00000020		/* system does minimal timer coalescing */
#define NOTE_BACKGROUND	0x00000040		/* system does maximum timer coalescing */
/*
 * data/hint fflags for EVFILT_SOCK, shared with userspace.
 *
 */
#define	NOTE_CONNRESET		0x00000001 /* Received RST */
#define	NOTE_READCLOSED		0x00000002 /* Read side is shutdown */
#define	NOTE_WRITECLOSED	0x00000004 /* Write side is shutdown */
#define	NOTE_TIMEOUT		0x00000008 /* timeout: rexmt, keep-alive or persist */
#define	NOTE_NOSRCADDR		0x00000010 /* source address not available */
#define	NOTE_IFDENIED		0x00000020 /* interface denied connection */
#define	NOTE_SUSPEND		0x00000040 /* output queue suspended */
#define	NOTE_RESUME		0x00000080 /* output queue resumed */
#define NOTE_KEEPALIVE		0x00000100 /* TCP Keepalive received */
#define NOTE_ADAPTIVE_WTIMO	0x00000200 /* TCP adaptive write timeout */
#define NOTE_ADAPTIVE_RTIMO	0x00000400 /* TCP adaptive read timeout */
#define	NOTE_CONNECTED		0x00000800 /* socket is connected */
#define	NOTE_DISCONNECTED	0x00001000 /* socket is disconnected */
#define	NOTE_CONNINFO_UPDATED	0x00002000 /* connection info was updated */


/*
 * data/hint fflags for EVFILT_MACHPORT, shared with userspace.
 *
 * Only portsets are supported at this time.
 *
 * The fflags field can optionally contain the MACH_RCV_MSG, MACH_RCV_LARGE,
 * and related trailer receive options as defined in <mach/message.h>.
 * The presence of these flags directs the kevent64() call to attempt to receive
 * the message during kevent delivery, rather than just indicate that a message exists.
 * On setup, The ext[0] field contains the receive buffer pointer and ext[1] contains
 * the receive buffer length.  Upon event delivery, the actual received message size
 * is returned in ext[1].  As with mach_msg(), the buffer must be large enough to
 * receive the message and the requested (or default) message trailers.  In addition,
 * the fflags field contains the return code normally returned by mach_msg().
 *
 * If no message receipt options were provided in the fflags field on setup, no
 * message is received by this call. Instead, on output, the data field simply
 * contains the name of the actual port detected with a message waiting.
 */

/*
 * DEPRECATED!!!!!!!!!
 * NOTE_TRACK, NOTE_TRACKERR, and NOTE_CHILD are no longer supported as of 10.5
 */
/* additional flags for EVFILT_PROC */
#define	NOTE_TRACK	0x00000001		/* follow across forks */
#define	NOTE_TRACKERR	0x00000002		/* could not track child */
#define	NOTE_CHILD	0x00000004		/* am a child process */





#include <sys/queue.h> 
#include <kern/kern_types.h>

#ifdef MALLOC_DECLARE
MALLOC_DECLARE(M_KQUEUE);
#endif

TAILQ_HEAD(kqtailq, knote);	/* a list of "queued" events */

struct knote {
	int		kn_inuse;	/* inuse count */
	struct kqtailq	*kn_tq;		/* pointer to tail queue */
	TAILQ_ENTRY(knote)	kn_tqe;		/* linkage for tail queue */
	struct kqueue	*kn_kq;	/* which kqueue we are on */
	SLIST_ENTRY(knote)	kn_link;	/* linkage for search list */
	SLIST_ENTRY(knote)	kn_selnext;	/* klist element chain */
	union {
		struct		fileproc *p_fp;	/* file data pointer */
		struct		proc *p_proc;	/* proc pointer */
		struct          ipc_pset *p_pset;       /* pset pointer */
	} kn_ptr;
	struct			filterops *kn_fop;
	int			kn_status;	/* status bits */
	int			kn_sfflags;	/* saved filter flags */
	struct 			kevent64_s kn_kevent;
	void			*kn_hook;
	int			kn_hookid;
	int64_t			kn_sdata;	/* saved data field */

#define KN_ACTIVE	0x01			/* event has been triggered */
#define KN_QUEUED	0x02			/* event is on queue */
#define KN_DISABLED	0x04			/* event is disabled */
#define KN_DROPPING	0x08			/* knote is being dropped */
#define KN_USEWAIT	0x10			/* wait for knote use */
#define KN_ATTACHING	0x20			/* event is pending attach */
#define KN_STAYQUEUED	0x40			/* force event to stay on queue */

#define kn_id		kn_kevent.ident
#define kn_filter	kn_kevent.filter
#define kn_flags	kn_kevent.flags
#define kn_fflags	kn_kevent.fflags
#define kn_data		kn_kevent.data
#define kn_udata	kn_kevent.udata
#define kn_ext		kn_kevent.ext
#define kn_fp		kn_ptr.p_fp
};

/* Hint values for f_touch filter operation */
#define EVENT_REGISTER  1
#define EVENT_PROCESS   2

struct filterops {
	int	f_isfd;		/* true if ident == filedescriptor */
	int	(*f_attach)(struct knote *kn);
	void	(*f_detach)(struct knote *kn);
	int	(*f_event)(struct knote *kn, long hint);
	/* Optional f_touch operation, called only if !f_isfd && non-NULL */
	void    (*f_touch)(struct knote *kn, struct kevent64_s *kev, long type);
	/* Optional f_peek operation, called only if KN_STAYQUEUED is set */
	unsigned (*f_peek)(struct knote *kn);
};

struct proc;
struct wait_queue;

SLIST_HEAD(klist, knote);
extern void	knote_init(void);
extern void	klist_init(struct klist *list);

#define KNOTE(list, hint)	knote(list, hint)
#define KNOTE_ATTACH(list, kn)	knote_attach(list, kn)
#define KNOTE_DETACH(list, kn)	knote_detach(list, kn)


extern void	knote(struct klist *list, long hint);
extern int	knote_attach(struct klist *list, struct knote *kn);
extern int	knote_detach(struct klist *list, struct knote *kn);
extern int	knote_link_wait_queue(struct knote *kn, struct wait_queue *wq, wait_queue_link_t wql);	
extern int	knote_unlink_wait_queue(struct knote *kn, struct wait_queue *wq, wait_queue_link_t *wqlp);
extern void	knote_fdclose(struct proc *p, int fd);
extern void	knote_markstayqueued(struct knote *kn);




#endif /* !_SYS_EVENT_H_ */
