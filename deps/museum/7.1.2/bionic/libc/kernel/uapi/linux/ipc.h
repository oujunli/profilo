/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_IPC_H
#define _UAPI_LINUX_IPC_H
#define UAPI_LINUX_IPC_H
#define UAPI_LINUX_IPC_H_
#define _LINUX_IPC_H
#define _LINUX_IPC_H_
#define _UAPI_LINUX_IPC_H_
#include <museum/7.1.2/bionic/libc/linux/types.h>
#define IPC_PRIVATE ((__kernel_key_t) 0)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct ipc_perm {
  __kernel_key_t key;
  __kernel_uid_t uid;
  __kernel_gid_t gid;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __kernel_uid_t cuid;
  __kernel_gid_t cgid;
  __kernel_mode_t mode;
  unsigned short seq;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#include <museum/7.1.2/bionic/libc/asm/ipcbuf.h>
#define IPC_CREAT 00001000
#define IPC_EXCL 00002000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPC_NOWAIT 00004000
#define IPC_DIPC 00010000
#define IPC_OWN 00020000
#define IPC_RMID 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPC_SET 1
#define IPC_STAT 2
#define IPC_INFO 3
#define IPC_OLD 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define IPC_64 0x0100
struct ipc_kludge {
  struct msgbuf __user * msgp;
  long msgtyp;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define SEMOP 1
#define SEMGET 2
#define SEMCTL 3
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SEMTIMEDOP 4
#define MSGSND 11
#define MSGRCV 12
#define MSGGET 13
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MSGCTL 14
#define SHMAT 21
#define SHMDT 22
#define SHMGET 23
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define SHMCTL 24
#define DIPC 25
#define IPCCALL(version,op) ((version) << 16 | (op))
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
