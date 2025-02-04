/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _DATA_H_RPCGEN
#define _DATA_H_RPCGEN

#include <rpc/rpc.h>

#include <pthread.h>

#ifdef __cplusplus
extern "C" {
#endif


struct square_in {
	long arg1;
};
typedef struct square_in square_in;

struct square_out {
	long res1;
};
typedef struct square_out square_out;

#define SQUARE_PROG 0x31230000
#define SQUARE_VERS 2

#if defined(__STDC__) || defined(__cplusplus)
#define SQUAREPROC 1
extern  enum clnt_stat squareproc_2(square_in *, square_out *, CLIENT *);
extern  bool_t squareproc_2_svc(square_in *, square_out *, struct svc_req *);
extern int square_prog_2_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define SQUAREPROC 1
extern  enum clnt_stat squareproc_2();
extern  bool_t squareproc_2_svc();
extern int square_prog_2_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_square_in (XDR *, square_in*);
extern  bool_t xdr_square_out (XDR *, square_out*);

#else /* K&R C */
extern bool_t xdr_square_in ();
extern bool_t xdr_square_out ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_DATA_H_RPCGEN */
