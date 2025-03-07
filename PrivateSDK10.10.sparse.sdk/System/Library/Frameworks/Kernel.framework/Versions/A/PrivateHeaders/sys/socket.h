/*
 * Copyright (c) 2000-2014 Apple Inc. All rights reserved.
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
/* Copyright (c) 1998, 1999 Apple Computer, Inc. All Rights Reserved */
/* Copyright (c) 1995 NeXT Computer, Inc. All Rights Reserved */
/*
 * Copyright (c) 1982, 1985, 1986, 1988, 1993, 1994
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 *	@(#)socket.h	8.4 (Berkeley) 2/21/94
 * $FreeBSD: src/sys/sys/socket.h,v 1.39.2.7 2001/07/03 11:02:01 ume Exp $
 */
/*
 * NOTICE: This file was modified by SPARTA, Inc. in 2005 to introduce
 * support for mandatory and extensible security protections.  This notice
 * is included in support of clause 2.2 (b) of the Apple Public License,
 * Version 2.0.
 */

#ifndef _SYS_SOCKET_H_
#define	_SYS_SOCKET_H_

#include <sys/types.h>
#include <sys/cdefs.h>
#include <machine/_param.h>

#include <sys/param.h>
#include <uuid/uuid.h>


/*
 * Definitions related to sockets: types, address families, options.
 */

/*
 * Data types.
 */

#include <sys/_types/_gid_t.h>
#include <sys/_types/_off_t.h>
#include <sys/_types/_pid_t.h>
#include <sys/_types/_sa_family_t.h>
#include <sys/_types/_socklen_t.h>

/* XXX Not explicitly defined by POSIX, but function return types are */
#include <sys/_types/_size_t.h>
 
/* XXX Not explicitly defined by POSIX, but function return types are */
#include <sys/_types/_ssize_t.h>

/*
 * [XSI] The iovec structure shall be defined as described in <sys/uio.h>.
 */
#include <sys/_types/_iovec_t.h>

#define SO_TCDBG_PID		0x01	/* Set/get traffic class for PID */
#define SO_TCDBG_PNAME		0x02	/* Set/get traffic class for processes of that name */
#define SO_TCDBG_PURGE		0x04	/* Purge entries for unused PIDs */
#define SO_TCDBG_FLUSH		0x08	/* Flush all entries */
#define SO_TCDBG_COUNT		0x10	/* Get count of entries */
#define SO_TCDBG_LIST		0x20	/* List entries */
#define SO_TCDBG_DELETE		0x40	/* Delete a process entry */
#define SO_TCDBG_TCFLUSH_PID	0x80	/* Flush traffic class for PID */

struct so_tcdbg {
	u_int32_t	so_tcdbg_cmd;
	int32_t		so_tcdbg_tclass;
	u_int32_t	so_tcdbg_count;
	pid_t		so_tcdbg_pid;
	char		so_tcdbg_pname[MAXCOMLEN + 1];
	int32_t		so_tcdbg_opportunistic; /* -1: unspecified, 0: off, 1: on, other: errors */
};
 
/*
 * Types
 */
#define	SOCK_STREAM	1		/* stream socket */
#define	SOCK_DGRAM	2		/* datagram socket */
#define	SOCK_RAW	3		/* raw-protocol interface */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	SOCK_RDM	4		/* reliably-delivered message */
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */
#define	SOCK_SEQPACKET	5		/* sequenced packet stream */

/*
 * Option flags per-socket.
 */
#define	SO_DEBUG	0x0001		/* turn on debugging info recording */
#define	SO_ACCEPTCONN	0x0002		/* socket has had listen() */
#define	SO_REUSEADDR	0x0004		/* allow local address reuse */
#define	SO_KEEPALIVE	0x0008		/* keep connections alive */
#define	SO_DONTROUTE	0x0010		/* just use interface addresses */
#define	SO_BROADCAST	0x0020		/* permit sending of broadcast msgs */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	SO_USELOOPBACK	0x0040		/* bypass hardware when possible */
#define SO_LINGER	0x0080          /* linger on close if data present (in ticks) */
#else
#define SO_LINGER	0x1080          /* linger on close if data present (in seconds) */
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */
#define	SO_OOBINLINE	0x0100		/* leave received OOB data in line */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	SO_REUSEPORT	0x0200		/* allow local address & port reuse */
#define	SO_TIMESTAMP	0x0400		/* timestamp received dgram traffic */
#define SO_TIMESTAMP_MONOTONIC	0x0800	/* Monotonically increasing timestamp on rcvd dgram */
#ifndef __APPLE__
#define	SO_ACCEPTFILTER	0x1000		/* there is an accept filter */
#else
#define SO_DONTTRUNC	0x2000		/* APPLE: Retain unread data */
					/*  (ATOMIC proto) */
#define SO_WANTMORE	0x4000		/* APPLE: Give hint when more data ready */
#define SO_WANTOOBFLAG	0x8000		/* APPLE: Want OOB in MSG_FLAG on receive */

#define	SO_NOWAKEFROMSLEEP	0x10000	/* Don't wake for traffic to this socket */

#endif  /* (!__APPLE__) */
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/*
 * Additional options, not kept in so_options.
 */
#define SO_SNDBUF	0x1001		/* send buffer size */
#define SO_RCVBUF	0x1002		/* receive buffer size */
#define SO_SNDLOWAT	0x1003		/* send low-water mark */
#define SO_RCVLOWAT	0x1004		/* receive low-water mark */
#define SO_SNDTIMEO	0x1005		/* send timeout */
#define SO_RCVTIMEO	0x1006		/* receive timeout */
#define	SO_ERROR	0x1007		/* get error status and clear */
#define	SO_TYPE		0x1008		/* get socket type */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
/*efine	SO_PRIVSTATE	0x1009		   get/deny privileged state */
#define SO_LABEL        0x1010          /* socket's MAC label */
#define SO_PEERLABEL    0x1011          /* socket's peer MAC label */
#ifdef __APPLE__
#define SO_NREAD	0x1020		/* APPLE: get 1st-packet byte count */
#define SO_NKE		0x1021		/* APPLE: Install socket-level NKE */
#define SO_NOSIGPIPE	0x1022		/* APPLE: No SIGPIPE on EPIPE */
#define SO_NOADDRERR	0x1023		/* APPLE: Returns EADDRNOTAVAIL when src is not available anymore */
#define SO_NWRITE	0x1024		/* APPLE: Get number of bytes currently in send socket buffer */
#define SO_REUSESHAREUID	0x1025		/* APPLE: Allow reuse of port/socket by different userids */
#ifdef __APPLE_API_PRIVATE
#define SO_NOTIFYCONFLICT	0x1026	/* APPLE: send notification if there is a bind on a port which is already in use */
#define	SO_UPCALLCLOSEWAIT	0x1027	/* APPLE: block on close until an upcall returns */
#endif
#define SO_LINGER_SEC	0x1080          /* linger on close if data present (in seconds) */
#define	SO_RESTRICTIONS	0x1081		/* APPLE: deny flag set */
#define	 SO_RESTRICT_DENY_IN	0x1	/* deny inbound (trapdoor) */
#define	 SO_RESTRICT_DENY_OUT	0x2	/* deny outbound (trapdoor) */
#define	 SO_RESTRICT_DENY_CELLULAR 0x4	/* deny use of cellular (trapdoor) */
#define	 SO_RESTRICT_DENY_EXPENSIVE 0x8	/* deny use of expensive if (trapdoor)*/
#define SO_RANDOMPORT   0x1082  /* APPLE: request local port randomization */
#define SO_NP_EXTENSIONS	0x1083	/* To turn off some POSIX behavior */
#endif

#define	SO_EXECPATH	0x1085 		/* Application Firewall Socket option */
/*
 * Traffic service class definitions (lowest to highest):
 *
 * SO_TC_BK_SYS
 *	"Background System-Initiated", high delay tolerant, high loss
 *	tolerant, elastic flow, variable size & long-lived.  E.g: system-
 *	initiated iCloud synching or Time Capsule backup, for which there
 *	is no progress feedbacks.
 *
 * SO_TC_BK
 *	"Background", user-initiated, high delay tolerant, high loss tolerant,
 *	elastic flow, variable size.  E.g. user-initiated iCloud synching or
 *	Time Capsule backup; or traffics of background applications, for which
 *	there is some progress feedbacks.
 *
 * SO_TC_BE
 *	"Best Effort", unclassified/standard.  This is the default service
 *	class; pretty much a mix of everything.
 *
 * SO_TC_RD
 *	"Responsive Data", a notch higher than "Best Effort", medium delay
 *	tolerant, elastic & inelastic flow, bursty, long-lived.  E.g. email,
 *	instant messaging, for which there is a sense of interactivity and
 *	urgency (user waiting for output).
 *
 * SO_TC_OAM
 *	"Operations, Administration, and Management", medium delay tolerant,
 *	low-medium loss tolerant, elastic & inelastic flows, variable size.
 *	E.g. VPN tunnels.
 *
 * SO_TC_AV
 *	"Multimedia Audio/Video Streaming", medium delay tolerant, low-medium
 *	loss tolerant, elastic flow, constant packet interval, variable rate &
 *	size.  E.g. AirPlay playback (both video and audio).
 *
 * SO_TC_RV
 *	"Responsive Multimedia Audio/Video", low delay tolerant, low-medium
 *	loss tolerant, elastic flow, variable packet interval, rate and size.
 *	E.g. AirPlay mirroring, screen sharing.
 *
 * SO_TC_VI
 *	"Interactive Video", low delay tolerant, low-medium loss tolerant,
 *	elastic flow, constant packet interval, variable rate & size.  E.g.
 *	FaceTime video.
 *
 * SO_TC_VO
 *	"Interactive Voice", low delay tolerant, low loss tolerant, inelastic
 *	flow, constant packet rate, somewhat fixed size.  E.g. VoIP including
 *	FaceTime audio.
 *
 * SO_TC_CTL
 *	"Network Control", low delay tolerant, low loss tolerant, inelastic
 *	flow, rate is bursty but short, variable size.  E.g. DNS queries;
 *	certain types of locally-originated ICMP, ICMPv6; IGMP/MLD join/leave,
 *	ARP.
 */
#define SO_TRAFFIC_CLASS	0x1086	/* Traffic service class (int) */
#define	 SO_TC_BK_SYS	100		/* lowest class */
#define	 SO_TC_BK	200
#define  SO_TC_BE	0
#define	 SO_TC_RD	300
#define	 SO_TC_OAM	400
#define	 SO_TC_AV	500
#define	 SO_TC_RV	600
#define	 SO_TC_VI	700
#define	 SO_TC_VO	800
#define	 SO_TC_CTL	900		/* highest class */
#define  SO_TC_MAX	10		/* Total # of traffic classes */

/* Background socket configuration flags */
#define TRAFFIC_MGT_SO_BACKGROUND       0x0001  /* background socket */
#define TRAFFIC_MGT_TCP_RECVBG          0x0002  /* Only TCP sockets, receiver throttling */

#define SO_RECV_TRAFFIC_CLASS	0x1087		/* Receive traffic class (bool)*/
#define SO_TRAFFIC_CLASS_DBG	0x1088		/* Debug traffic class (struct so_tcdbg) */
#define SO_TRAFFIC_CLASS_STATS	0x1089		/* Traffic class statistics */
#define SO_PRIVILEGED_TRAFFIC_CLASS 0x1090	/* Privileged traffic class (bool) */
#define	SO_DEFUNCTOK	0x1100		/* can be defunct'd */
#define	SO_ISDEFUNCT	0x1101		/* get defunct status */

#define	SO_OPPORTUNISTIC	0x1102	/* deprecated; use SO_TRAFFIC_CLASS */

/*
 * SO_FLUSH flushes any unsent data generated by a given socket.  It takes
 * an integer parameter, which can be any of the SO_TC traffic class values,
 * or the special SO_TC_ALL value.
 */
#define	SO_FLUSH	0x1103		/* flush unsent data (int) */
#define	 SO_TC_ALL	(-1)

#define	SO_RECV_ANYIF	0x1104		/* unrestricted inbound processing */
#define	SO_TRAFFIC_MGT_BACKGROUND	0x1105	/* Background traffic management */
 
#define	SO_FLOW_DIVERT_TOKEN	0x1106	/* flow divert token */

#define	SO_DELEGATED		0x1107	/* set socket as delegate (pid_t) */
#define	SO_DELEGATED_UUID	0x1108	/* set socket as delegate (uuid_t) */
#define	SO_NECP_ATTRIBUTES	0x1109	/* NECP socket attributes (domain, account, etc.) */
#define	SO_CFIL_SOCK_ID		0x1110	/* get content filter socket ID (cfil_sock_id_t) */
#if MPTCP
#define SO_MPTCP_FASTJOIN	0x1111	/* fast join MPTCP */
#endif /* MPTCP */

#define	SO_AWDL_UNRESTRICTED 	0x1113  /* try to use AWDL in restricted mode */

#define SO_NUMRCVPKT		0x1112	/* number of datagrams in receive socket buffer */

#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/*
 * Structure used for manipulating linger option.
 */
struct	linger {
	int	l_onoff;		/* option on/off */
	int	l_linger;		/* linger time */
};

#ifndef __APPLE__
struct	accept_filter_arg {
	char	af_name[16];
	char	af_arg[256-16];
};
#endif

#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#ifdef __APPLE__

/*
 * Structure to control non-portable Sockets extension to POSIX  
 */
struct so_np_extensions {
	u_int32_t	npx_flags;
	u_int32_t	npx_mask;
};

#define SONPX_SETOPTSHUT	0x000000001     /* flag for allowing setsockopt after shutdown */


#define SONPX_MASK_VALID		(SONPX_SETOPTSHUT)
#define IS_SO_TC_BACKGROUND(_tc_) ((_tc_) == SO_TC_BK || (_tc_) == SO_TC_BK_SYS)

#endif
#endif

/*
 * Level number for (get/set)sockopt() to apply to socket itself.
 */
#define	SOL_SOCKET	0xffff		/* options for socket level */


/*
 * Address families.
 */
#define	AF_UNSPEC	0		/* unspecified */
#define	AF_UNIX		1		/* local to host (pipes) */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	AF_LOCAL	AF_UNIX		/* backward compatibility */
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */
#define	AF_INET		2		/* internetwork: UDP, TCP, etc. */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	AF_IMPLINK	3		/* arpanet imp addresses */
#define	AF_PUP		4		/* pup protocols: e.g. BSP */
#define	AF_CHAOS	5		/* mit CHAOS protocols */
#define	AF_NS		6		/* XEROX NS protocols */
#define	AF_ISO		7		/* ISO protocols */
#define	AF_OSI		AF_ISO
#define	AF_ECMA		8		/* European computer manufacturers */
#define	AF_DATAKIT	9		/* datakit protocols */
#define	AF_CCITT	10		/* CCITT protocols, X.25 etc */
#define	AF_SNA		11		/* IBM SNA */
#define AF_DECnet	12		/* DECnet */
#define AF_DLI		13		/* DEC Direct data link interface */
#define AF_LAT		14		/* LAT */
#define	AF_HYLINK	15		/* NSC Hyperchannel */
#define	AF_APPLETALK	16		/* Apple Talk */
#define	AF_ROUTE	17		/* Internal Routing Protocol */
#define	AF_LINK		18		/* Link layer interface */
#define	pseudo_AF_XTP	19		/* eXpress Transfer Protocol (no AF) */
#define	AF_COIP		20		/* connection-oriented IP, aka ST II */
#define	AF_CNT		21		/* Computer Network Technology */
#define pseudo_AF_RTIP	22		/* Help Identify RTIP packets */
#define	AF_IPX		23		/* Novell Internet Protocol */
#define	AF_SIP		24		/* Simple Internet Protocol */
#define pseudo_AF_PIP	25		/* Help Identify PIP packets */
/*define pseudo_AF_BLUE	26	   Identify packets for Blue Box - Not used */
#define AF_NDRV		27		/* Network Driver 'raw' access */
#define	AF_ISDN		28		/* Integrated Services Digital Network*/
#define	AF_E164		AF_ISDN		/* CCITT E.164 recommendation */
#define	pseudo_AF_KEY	29		/* Internal key-management function */
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */
#define	AF_INET6	30		/* IPv6 */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	AF_NATM		31		/* native ATM access */
#define AF_SYSTEM	32		/* Kernel event messages */
#define AF_NETBIOS	33		/* NetBIOS */
#define AF_PPP		34		/* PPP communication protocol */
#define pseudo_AF_HDRCMPLT 35		/* Used by BPF to not rewrite headers
					 * in interface output routine */
#define AF_AFP	36			/* Used by AFP */
#define AF_IEEE80211    37              /* IEEE 802.11 protocol */
#define AF_UTUN		38
#define	AF_MULTIPATH	39
#define	AF_MAX		40
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/*
 * [XSI] Structure used by kernel to store most addresses.
 */
struct sockaddr {
	__uint8_t	sa_len;		/* total length */
	sa_family_t	sa_family;	/* [XSI] address family */
	char		sa_data[14];	/* [XSI] addr value (actually larger) */
};

#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	SOCK_MAXADDRLEN	255		/* longest possible addresses */

/*
 * Structure used by kernel to pass protocol
 * information in raw sockets.
 */
struct sockproto {
	__uint16_t	sp_family;		/* address family */
	__uint16_t	sp_protocol;		/* protocol */
};
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE)*/

/*
 * RFC 2553: protocol-independent placeholder for socket addresses
 */
#define	_SS_MAXSIZE	128
#define	_SS_ALIGNSIZE	(sizeof(__int64_t))
#define	_SS_PAD1SIZE	\
		(_SS_ALIGNSIZE - sizeof(__uint8_t) - sizeof(sa_family_t))
#define	_SS_PAD2SIZE	\
		(_SS_MAXSIZE - sizeof(__uint8_t) - sizeof(sa_family_t) - \
				_SS_PAD1SIZE - _SS_ALIGNSIZE)

/*
 * [XSI] sockaddr_storage
 */
struct sockaddr_storage {
	__uint8_t	ss_len;		/* address length */
	sa_family_t	ss_family;	/* [XSI] address family */
	char			__ss_pad1[_SS_PAD1SIZE];
	__int64_t	__ss_align;	/* force structure storage alignment */
	char			__ss_pad2[_SS_PAD2SIZE];
};


/*
 * Protocol families, same as address families for now.
 */
#define	PF_UNSPEC	AF_UNSPEC
#define	PF_LOCAL	AF_LOCAL
#define	PF_UNIX		PF_LOCAL	/* backward compatibility */
#define	PF_INET		AF_INET
#define	PF_IMPLINK	AF_IMPLINK
#define	PF_PUP		AF_PUP
#define	PF_CHAOS	AF_CHAOS
#define	PF_NS		AF_NS
#define	PF_ISO		AF_ISO
#define	PF_OSI		AF_ISO
#define	PF_ECMA		AF_ECMA
#define	PF_DATAKIT	AF_DATAKIT
#define	PF_CCITT	AF_CCITT
#define	PF_SNA		AF_SNA
#define PF_DECnet	AF_DECnet
#define PF_DLI		AF_DLI
#define PF_LAT		AF_LAT
#define	PF_HYLINK	AF_HYLINK
#define	PF_APPLETALK	AF_APPLETALK
#define	PF_ROUTE	AF_ROUTE
#define	PF_LINK		AF_LINK
#define	PF_XTP		pseudo_AF_XTP	/* really just proto family, no AF */
#define	PF_COIP		AF_COIP
#define	PF_CNT		AF_CNT
#define	PF_SIP		AF_SIP
#define	PF_IPX		AF_IPX		/* same format as AF_NS */
#define PF_RTIP		pseudo_AF_RTIP	/* same format as AF_INET */
#define PF_PIP		pseudo_AF_PIP
#define PF_NDRV		AF_NDRV
#define	PF_ISDN		AF_ISDN
#define	PF_KEY		pseudo_AF_KEY
#define	PF_INET6	AF_INET6
#define	PF_NATM		AF_NATM
#define PF_SYSTEM	AF_SYSTEM
#define PF_NETBIOS	AF_NETBIOS
#define PF_PPP		AF_PPP
#define PF_AFP		AF_AFP
#define PF_UTUN		AF_UTUN
#define	PF_MULTIPATH	AF_MULTIPATH
#define	PF_MAX		AF_MAX

/*
 * These do not have socket-layer support:
 */
#define	PF_VLAN		((uint32_t)0x766c616e)	/* 'vlan' */
#define PF_BOND		((uint32_t)0x626f6e64)	/* 'bond' */
#define PF_BRIDGE	((uint32_t)0x62726467)	/* 'brdg' */

/*
 * Definitions for network related sysctl, CTL_NET.
 *
 * Second level is protocol family.
 * Third level is protocol number.
 *
 * Further levels are defined by the individual families below.
 */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define NET_MAXID	AF_MAX
#endif /* (_POSIX_C_SOURCE && !_DARWIN_C_SOURCE) */

#define CTL_NET_NAMES { \
	{ 0, 0 }, \
	{ "local", CTLTYPE_NODE }, \
	{ "inet", CTLTYPE_NODE }, \
	{ "implink", CTLTYPE_NODE }, \
	{ "pup", CTLTYPE_NODE }, \
	{ "chaos", CTLTYPE_NODE }, \
	{ "xerox_ns", CTLTYPE_NODE }, \
	{ "iso", CTLTYPE_NODE }, \
	{ "emca", CTLTYPE_NODE }, \
	{ "datakit", CTLTYPE_NODE }, \
	{ "ccitt", CTLTYPE_NODE }, \
	{ "ibm_sna", CTLTYPE_NODE }, \
	{ "decnet", CTLTYPE_NODE }, \
	{ "dec_dli", CTLTYPE_NODE }, \
	{ "lat", CTLTYPE_NODE }, \
	{ "hylink", CTLTYPE_NODE }, \
	{ "appletalk", CTLTYPE_NODE }, \
	{ "route", CTLTYPE_NODE }, \
	{ "link_layer", CTLTYPE_NODE }, \
	{ "xtp", CTLTYPE_NODE }, \
	{ "coip", CTLTYPE_NODE }, \
	{ "cnt", CTLTYPE_NODE }, \
	{ "rtip", CTLTYPE_NODE }, \
	{ "ipx", CTLTYPE_NODE }, \
	{ "sip", CTLTYPE_NODE }, \
	{ "pip", CTLTYPE_NODE }, \
	{ 0, 0 }, \
	{ "ndrv", CTLTYPE_NODE }, \
	{ "isdn", CTLTYPE_NODE }, \
	{ "key", CTLTYPE_NODE }, \
	{ "inet6", CTLTYPE_NODE }, \
	{ "natm", CTLTYPE_NODE }, \
	{ "sys", CTLTYPE_NODE }, \
	{ "netbios", CTLTYPE_NODE }, \
	{ "ppp", CTLTYPE_NODE }, \
	{ "hdrcomplete", CTLTYPE_NODE }, \
}

#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
/*
 * PF_ROUTE - Routing table
 *
 * Three additional levels are defined:
 *	Fourth: address family, 0 is wildcard
 *	Fifth: type of info, defined below
 *	Sixth: flag(s) to mask with for NET_RT_FLAGS
 */
#define NET_RT_DUMP		1	/* dump; may limit to a.f. */
#define NET_RT_FLAGS		2	/* by flags, e.g. RESOLVING */
#define NET_RT_IFLIST		3	/* survey interface list */
#define NET_RT_STAT		4	/* routing statistics */
#define NET_RT_TRASH		5	/* routes not in table but not freed */
#define NET_RT_IFLIST2		6	/* interface list with addresses */
#define NET_RT_DUMP2		7	/* dump; may limit to a.f. */
#define	NET_RT_DUMPX		8	/* private */
#define	NET_RT_DUMPX_FLAGS	9	/* private */
#define	NET_RT_MAXID		10
#endif /* (_POSIX_C_SOURCE && !_DARWIN_C_SOURCE) */

#define CTL_NET_RT_NAMES { \
	{ 0, 0 }, \
	{ "dump", CTLTYPE_STRUCT }, \
	{ "flags", CTLTYPE_STRUCT }, \
	{ "iflist", CTLTYPE_STRUCT }, \
	{ "stat", CTLTYPE_STRUCT }, \
	{ "trash", CTLTYPE_INT }, \
	{ "iflist2", CTLTYPE_STRUCT }, \
        { "dump2", CTLTYPE_STRUCT }, \
        { "dumpx", CTLTYPE_STRUCT }, \
        { "dumpx_flags", CTLTYPE_STRUCT }, \
}


/*
 * Maximum queue length specifiable by listen.
 */
#define	SOMAXCONN	128

/*
 * [XSI] Message header for recvmsg and sendmsg calls.
 * Used value-result for recvmsg, value only for sendmsg.
 */
struct msghdr {
	void		*msg_name;	/* [XSI] optional address */
	socklen_t	msg_namelen;	/* [XSI] size of address */
	struct		iovec *msg_iov;	/* [XSI] scatter/gather array */
	int		msg_iovlen;	/* [XSI] # elements in msg_iov */
	void		*msg_control;	/* [XSI] ancillary data, see below */
	socklen_t	msg_controllen;	/* [XSI] ancillary data buffer len */
	int		msg_flags;	/* [XSI] flags on received message */
};

/*
 * Extended version for sendmsg_x() and recvmsg_x() calls
 *
 * For recvmsg_x(), the size of the data received is given by the field
 * msg_datalen.
 *
 * For sendmsg_x(), the size of the data to send is given by the length of 
 * the iovec array -- like sendmsg(). The field msg_datalen is ignored.
 */
struct msghdr_x {
	void		*msg_name;	/* optional address */
	socklen_t	msg_namelen;	/* size of address */
	struct iovec 	*msg_iov;	/* scatter/gather array */
	int		msg_iovlen;	/* # elements in msg_iov */
	void		*msg_control;	/* ancillary data, see below */
	socklen_t	msg_controllen;	/* ancillary data buffer len */
	int		msg_flags;	/* flags on received message */
	size_t		msg_datalen;	/* byte length of buffer in msg_iov */
};


#define	MSG_OOB		0x1		/* process out-of-band data */
#define	MSG_PEEK	0x2		/* peek at incoming message */
#define	MSG_DONTROUTE	0x4		/* send without using routing tables */
#define	MSG_EOR		0x8		/* data completes record */
#define	MSG_TRUNC	0x10		/* data discarded before delivery */
#define	MSG_CTRUNC	0x20		/* control data lost before delivery */
#define	MSG_WAITALL	0x40		/* wait for full request or error */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	MSG_DONTWAIT	0x80		/* this message should be nonblocking */
#define	MSG_EOF		0x100		/* data completes connection */
#ifdef __APPLE__
#define MSG_WAITSTREAM  0x200           /* wait up to full request.. may return partial */
#define MSG_FLUSH	0x400		/* Start of 'hold' seq; dump so_temp */
#define MSG_HOLD	0x800		/* Hold frag in so_temp */
#define MSG_SEND	0x1000		/* Send the packet in so_temp */
#define MSG_HAVEMORE	0x2000		/* Data ready to be read */
#define MSG_RCVMORE	0x4000		/* Data remains in current pkt */
#endif
#define MSG_COMPAT      0x8000		/* deprecated */
#define MSG_NEEDSA	0x10000		/* Fail receive if socket address cannot be allocated */
#define MSG_NBIO	0x20000		/* FIONBIO mode, used by fifofs */
#define MSG_SKIPCFIL	0x40000		/* skip pass content filter */
#define MSG_USEUPCALL	0x80000000 /* Inherit upcall in sock_accept */
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/*
 * Header for ancillary data objects in msg_control buffer.
 * Used for additional information with/about a datagram
 * not expressible by flags.  The format is a sequence
 * of message elements headed by cmsghdr structures.
 */
struct cmsghdr {
	socklen_t	cmsg_len;	/* [XSI] data byte count, including hdr */
	int		cmsg_level;	/* [XSI] originating protocol */
	int		cmsg_type;	/* [XSI] protocol-specific type */
/* followed by	unsigned char  cmsg_data[]; */
};

#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#ifndef __APPLE__
/*
 * While we may have more groups than this, the cmsgcred struct must
 * be able to fit in an mbuf, and NGROUPS_MAX is too large to allow
 * this.
*/
#define CMGROUP_MAX 16

/*
 * Credentials structure, used to verify the identity of a peer
 * process that has sent us a message. This is allocated by the
 * peer process but filled in by the kernel. This prevents the
 * peer from lying about its identity. (Note that cmcred_groups[0]
 * is the effective GID.)
 */
struct cmsgcred {
	pid_t	cmcred_pid;		/* PID of sending process */
	uid_t	cmcred_uid;		/* real UID of sending process */
	uid_t	cmcred_euid;		/* effective UID of sending process */
	gid_t	cmcred_gid;		/* real GID of sending process */
	short	cmcred_ngroups;		/* number or groups */
	gid_t	cmcred_groups[CMGROUP_MAX];	/* groups */
};
#endif
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/* given pointer to struct cmsghdr, return pointer to data */
#define	CMSG_DATA(cmsg)		((unsigned char *)(cmsg) + \
				 __DARWIN_ALIGN32(sizeof(struct cmsghdr)))

/*
 * RFC 2292 requires to check msg_controllen, in case that the kernel returns
 * an empty list for some reasons.
 */
#define CMSG_FIRSTHDR(mhdr) \
        ((mhdr)->msg_controllen >= sizeof(struct cmsghdr) ? \
         (struct cmsghdr *)(mhdr)->msg_control : \
         (struct cmsghdr *)0L)


/* 
 * Given pointer to struct cmsghdr, return pointer to next cmsghdr
 * RFC 2292 says that CMSG_NXTHDR(mhdr, NULL) is equivalent to CMSG_FIRSTHDR(mhdr)
 */
#define	CMSG_NXTHDR(mhdr, cmsg)						\
	((char *)(cmsg) == (char *)0L ? CMSG_FIRSTHDR(mhdr) :		\
	 ((((unsigned char *)(cmsg) +					\
	    __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len) +		\
	    __DARWIN_ALIGN32(sizeof(struct cmsghdr))) >			\
	    ((unsigned char *)(mhdr)->msg_control +			\
	     (mhdr)->msg_controllen)) ?					\
	  (struct cmsghdr *)0L /* NULL */ :				\
	  (struct cmsghdr *)(void *)((unsigned char *)(cmsg) +		\
	 		    __DARWIN_ALIGN32((__uint32_t)(cmsg)->cmsg_len))))

#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
/* RFC 2292 additions */
#define	CMSG_SPACE(l)		(__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + __DARWIN_ALIGN32(l))
#define	CMSG_LEN(l)		(__DARWIN_ALIGN32(sizeof(struct cmsghdr)) + (l))

#define	CMSG_ALIGN(n)	__DARWIN_ALIGN32(n)
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/* "Socket"-level control message types: */
#define	SCM_RIGHTS			0x01	/* access rights (array of int) */
#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
#define	SCM_TIMESTAMP			0x02	/* timestamp (struct timeval) */
#define	SCM_CREDS			0x03	/* process creds (struct cmsgcred) */
#define	SCM_TIMESTAMP_MONOTONIC		0x04	/* timestamp (uint64_t) */ 

#define SCM_SEQNUM			0x05	/* TCP unordered recv seq no */
#define SCM_MSG_PRIORITY		0x06	/* TCP unordered snd priority */

/*
 * 4.3 compat sockaddr (deprecated)
 */
struct osockaddr {
	__uint16_t	sa_family;	/* address family */
	char	sa_data[14];		/* up to 14 bytes of direct address */
};

/*
 * 4.3-compat message header (deprecated)
 */
struct omsghdr {
	void		*msg_name;		/* optional address */
	socklen_t	msg_namelen;		/* size of address */
	struct	iovec	*msg_iov;		/* scatter/gather array */
	int		msg_iovlen;		/* # elements in msg_iov */
	void		*msg_accrights;		/* access rights sent/rcvd */
	int		msg_accrightslen;
};

#define	SA(s)	((struct sockaddr *)(void *)(s))
#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */

/*
 * howto arguments for shutdown(2), specified by Posix.1g.
 */
#define	SHUT_RD		0		/* shut down the reading side */
#define	SHUT_WR		1		/* shut down the writing side */
#define	SHUT_RDWR	2		/* shut down both sides */

#if !defined(_POSIX_C_SOURCE)
/*
 * sendfile(2) header/trailer struct
 */
struct sf_hdtr {
	struct iovec *headers;	/* pointer to an array of header struct iovec's */
	int hdr_cnt;		/* number of header iovec's */
	struct iovec *trailers;	/* pointer to an array of trailer struct iovec's */
	int trl_cnt;		/* number of trailer iovec's */
};


/* In-kernel representation */
struct user_sf_hdtr {
	user_addr_t headers;	/* pointer to an array of header struct iovec's */
	int hdr_cnt;		/* number of header iovec's */
	user_addr_t trailers;	/* pointer to an array of trailer struct iovec's */
	int trl_cnt;		/* number of trailer iovec's */
};

/* LP64 user version of struct sf_hdtr */
struct user64_sf_hdtr {
	user64_addr_t headers;	/* pointer to an array of header struct iovec's */
	int hdr_cnt;		/* number of header iovec's */
	user64_addr_t trailers;	/* pointer to an array of trailer struct iovec's */
	int trl_cnt;		/* number of trailer iovec's */
};

/* ILP32 user version of struct sf_hdtr */
struct user32_sf_hdtr {
	user32_addr_t headers;	/* pointer to an array of header struct iovec's */
	int hdr_cnt;		/* number of header iovec's */
	user32_addr_t trailers;	/* pointer to an array of trailer struct iovec's */
	int trl_cnt;		/* number of trailer iovec's */
};


#endif	/* !_POSIX_C_SOURCE */

#if !defined(_POSIX_C_SOURCE) || defined(_DARWIN_C_SOURCE)
typedef __uint32_t associd_t;
#define	ASSOCID_ANY	0
#define	ASSOCID_ALL	((associd_t)(-1ULL))

typedef __uint32_t connid_t;
#define	CONNID_ANY	0
#define	CONNID_ALL	((connid_t)(-1ULL))

/*
 * Structure for SIOCGASSOCIDS
 */
struct so_aidreq {
	__uint32_t	sar_cnt;	/* number of associations */
	associd_t	*sar_aidp;	/* array of association IDs */
};


/*
 * Structure for SIOCGCONNIDS
 */
struct so_cidreq {
	associd_t	scr_aid;	/* association ID */
	__uint32_t	scr_cnt;	/* number of connections */
	connid_t	*scr_cidp;	/* array of connection IDs */
};


/*
 * Structure for SIOCGCONNINFO
 */
struct so_cinforeq {
	connid_t	scir_cid;		/* connection ID */
	__uint32_t	scir_flags;		/* see flags below */
	__uint32_t	scir_ifindex;		/* (last) outbound interface */
	__int32_t	scir_error;		/* most recent error */
	struct sockaddr	*scir_src;		/* source address */
	socklen_t	scir_src_len;		/* source address len */
	struct sockaddr *scir_dst;		/* destination address */
	socklen_t	scir_dst_len;		/* destination address len */
	__uint32_t	scir_aux_type;		/* aux data type (CIAUX) */
	void		*scir_aux_data;		/* aux data */
	__uint32_t	scir_aux_len;		/* aux data len */
};


/* valid connection info flags */
#define	CIF_CONNECTING		0x1	/* connection was attempted */
#define	CIF_CONNECTED		0x2	/* connection is established */
#define	CIF_DISCONNECTING	0x4	/* disconnection was attempted */
#define	CIF_DISCONNECTED	0x8	/* has been disconnected */
#define	CIF_BOUND_IF		0x10	/* bound to an interface */
#define	CIF_BOUND_IP		0x20	/* bound to a src address */
#define	CIF_BOUND_PORT		0x40	/* bound to a src port */
#define	CIF_PREFERRED		0x80	/* connection is primary/preferred */
#define	CIF_MP_CAPABLE		0x100	/* supports multipath protocol */
#define	CIF_MP_READY		0x200	/* multipath protocol confirmed */
#define	CIF_MP_DEGRADED		0x400	/* has lost its multipath capability */
#define CIF_MP_ACTIVE		0x800	/* this is the active subflow */

/* valid connection info auxiliary data types */
#define	CIAUX_TCP	0x1	/* TCP auxiliary data (conninfo_tcp_t) */

/*
 * Structure for SIOC{S,G}CONNORDER
 */
struct so_cordreq {
	connid_t	sco_cid;		/* connection ID */
	__uint32_t	sco_rank;		/* rank (0 means unspecified) */
};

/*
 * Network policy subclass (of KEV_NETWORK_CLASS)
 */
#define	KEV_NETPOLICY_SUBCLASS	3

#define	KEV_NETPOLICY_IFDENIED	1	/* denied access to interface */

/*
 * Common structure for KEV_NETPOLICY_SUBCLASS
 */
struct netpolicy_event_data {
	__uint64_t	eupid;		/* effective unique PID */
	pid_t		epid;		/* effective PID */
#if !defined(__LP64__)
	__uint32_t	pad;
#endif /* __LP64__ */
	uuid_t		euuid;		/* effective UUID */
};

/*
 * NETPOLICY_IFDENIED event structure
 */
struct kev_netpolicy_ifdenied {
	struct netpolicy_event_data	ev_data;
};

/*
 * Socket subclass (of KEV_NETWORK_CLASS)
 */
#define	KEV_SOCKET_SUBCLASS	4

/*
 * Events for KEV_SOCKET_SUBCLASS of KEV_NETWORK_CLASS
 */
#define	KEV_SOCKET_CLOSED	1	/* completely closed by protocol */

/*
 * Common structure for KEV_SOCKET_SUBCLASS
 */
struct kev_socket_event_data {
	struct sockaddr_storage kev_sockname;
	struct sockaddr_storage kev_peername;
};

struct kev_socket_closed {
	struct kev_socket_event_data ev_data;
};

#endif	/* (!_POSIX_C_SOURCE || _DARWIN_C_SOURCE) */


#include <sys/kpi_socket.h>

#endif /* !_SYS_SOCKET_H_ */
