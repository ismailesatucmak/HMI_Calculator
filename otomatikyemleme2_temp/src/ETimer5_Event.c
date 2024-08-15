#include "stk.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"


char data1[200] , data2[200];
char pos[25];
unsigned char day , month , year , min , hour ;


dateGet(&day,&month,&year);
timeGet(&hour,&min);

memset(pos , 0x00 , sizeof(pos));
sprintf(pos , "%02d.%02d.20%02d" , day , month , year);

VarGet("tarih",data1);
VarSet("tarih",pos);

LabelSet("ELabel30" , "Caption" , pos);

memset(pos , 0x00 , sizeof(pos));
sprintf(pos , "%02d:%02d" , hour , min);

VarGet("saat1",data2);
VarSet("saat1",pos);

LabelSet("ELabel29" , "Caption" , pos);

