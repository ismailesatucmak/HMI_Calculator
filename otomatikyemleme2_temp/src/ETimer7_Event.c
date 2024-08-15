#include "stk.h"
#include "stdio.h"

int count ;


VarGet("cntr",&count);

count = 1;

VarSeti("cntr",count);


printf("\n gun gecti \n");