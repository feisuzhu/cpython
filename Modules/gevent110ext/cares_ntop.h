#ifdef CARES_EMBED
#include "ares_setup.h"
#include "inet_ntop.h"
#else
#define ares_inet_ntop(w,x,y,z) inet_ntop(w,x,y,z)
#endif
