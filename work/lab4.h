///////////////////////////////////////
// lab4.h

#include "pr_a.c"

#include "pr_b.c"

#ifndef DO_A
#define DO_A(X) pr_a(X);

#endif /*DO_A*/

#ifndef DO_B
#define DO_B(X) pr_b(X);

#endif /*DO_B*/
