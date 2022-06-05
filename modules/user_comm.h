#ifndef _USER_COMM_H
#define _USER_COMM_H

#include <linux/ioctl.h>

#define WDUM_IOC_MAGIC 'w'

#define WDUM_ADD_SM_GEN_RULE _IOW(WDUM_IOC_MAGIC, 0, char *)
#define WDUM_ADD_SM_HTTP_RULE _IOW(WDUM_IOC_MAGIC, 1, char *)
#define WDUM_ADD_SM_DNS_RULE _IOW(WDUM_IOC_MAGIC, 2, char *)
#define WDUM_ADD_RE_GEN_RULE _IOW(WDUM_IOC_MAGIC, 3, char *)
#define WDUM_ADD_RE_HTTP_RULE _IOW(WDUM_IOC_MAGIC, 4, char *)
#define WDUM_ADD_RE_DNS_RULE _IOW(WDUM_IOC_MAGIC, 5, char *)
#define WDUM_DEL_SM_GEN_RULE _IOW(WDUM_IOC_MAGIC, 6, char *)
#define WDUM_DEL_SM_HTTP_RULE _IOW(WDUM_IOC_MAGIC, 7, char *)
#define WDUM_DEL_SM_DNS_RULE _IOW(WDUM_IOC_MAGIC, 8, char *)
#define WDUM_DEL_RE_GEN_RULE _IOW(WDUM_IOC_MAGIC, 9, char *)
#define WDUM_DEL_RE_HTTP_RULE _IOW(WDUM_IOC_MAGIC, 10, char *)
#define WDUM_DEL_RE_DNS_RULE _IOW(WDUM_IOC_MAGIC, 11, char *)
#define WDUM_UPD_RULE_OLD _IOW(WDUM_IOC_MAGIC, 12, char *)
#define WDUM_UPD_RULE_NEW _IOW(WDUM_IOC_MAGIC, 13, char *)
#define WDUM_IOC_MAXNR 13

#endif /*_USER_COMM_H*/