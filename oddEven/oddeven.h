/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _ODDEVEN_H_RPCGEN
#define _ODDEVEN_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define oddeven 456123789
#define oddeven_VERS 6

#if defined(__STDC__) || defined(__cplusplus)
#define Check 1
extern  float * check_6(float *, CLIENT *);
extern  float * check_6_svc(float *, struct svc_req *);
extern int oddeven_6_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define Check 1
extern  float * check_6();
extern  float * check_6_svc();
extern int oddeven_6_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_ODDEVEN_H_RPCGEN */
