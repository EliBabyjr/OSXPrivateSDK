/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct connected {
    unsigned int timeElapsed;
    unsigned int timeRemaining;
    unsigned int inBytes;
    unsigned int inPackets;
    unsigned int inErrors;
    unsigned int outBytes;
    unsigned int outPackets;
    unsigned int outErrors;
};

struct disconnected {
    unsigned int lastDiscCause;
};

struct in6_addr {
    union {
        unsigned char __u6_addr8[16];
        unsigned short __u6_addr16[8];
        unsigned int __u6_addr32[4];
    } __u6_addr;
};

struct ppp_status {
    unsigned int status;
    union {
        struct connected run;
        struct disconnected disc;
    } s;
};

