#include "stk.h"
#include "stdio.h"

int say;

VarGet("say",&say);

say++;

printf("\n - %d - \n",say);

VarSeti("say",say);