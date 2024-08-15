#include "stk.h"
#include "stdio.h"


BuzzerSet(50);

char hour[5],min[5],a[30],b[30];
int q,hourint,minint;


VarGet("no",&q);
q++;
VarSet("no",&q);

LabelSeti("ELabel9",q);

int counter;

VarGet("cntr",&counter);

counter = 1;

VarSeti("cntr",counter);

printf("\n %d ayarlandi",counter);



/*
LabelGet("ELabelBox8","Text",hour);
LabelGet("ELabelBox10","Text",min);

Convert_StringToInt(hour,&hourint);
Convert_StringToInt(min,&minint);

if(hourint >= 0 && hourint <= 9)
{
    sprintf(a,"0%d",hourint);
    LabelSet("ELabelBox8","Text",a);
}

if(minint >= 0 && minint <= 9)
{
    sprintf(b,"0%d",minint);
    LabelSet("ELabelBox10","Text",b);
}
*/

