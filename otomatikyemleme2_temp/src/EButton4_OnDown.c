#include "stk.h"
#include "stdio.h"


BuzzerSet(50);

char hour[5],min[5],a[30],b[30];
int q,hourint,minint;


VarGet("EVar2",&q);
q++;
VarSet("EVar2",&q);

LabelSeti("ELabel9",q);


LabelGet("ELabelBox1","Text",hour);
LabelGet("ELabelBox3","Text",min);

Convert_StringToInt(hour,&hourint);
Convert_StringToInt(min,&minint);

if(hourint >= 0 && hourint <= 9)
{
    sprintf(a,"0%d",hourint);
    LabelSet("ELabelBox1","Text",a);
}

if(minint >= 0 && minint <= 9)
{
    sprintf(b,"0%d",minint);
    LabelSet("ELabelBox3","Text",b);
}


