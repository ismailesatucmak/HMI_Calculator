#include "stk.h"
#include "stdio.h"

BuzzerSet(50);

ListViewSet("ListView2","Delete_Selected",0);

ListViewSet("ListView2","update",0);

int counter;

VarGet("cntr",&counter);

counter = 1;

VarSeti("cntr",counter);

printf("\n %d ayarlandi",counter);


