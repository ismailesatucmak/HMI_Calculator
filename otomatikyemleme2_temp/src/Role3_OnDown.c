#include "stk.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

int rlo = 5;
int a;

LabelSet("ELabel6","Text","GPIO_5");

VarGet("GPIO",a);

VarSeti("GPIO",rlo);

LabelSeti("ELabel14",rlo);
