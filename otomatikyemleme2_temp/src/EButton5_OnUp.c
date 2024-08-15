#include "stk.h"
#include "stdio.h"
#include "string.h"

char min[20],tot[30],rpt[20],sure[20],io[20];
int no;


LabelGet("ELabelBox8","Caption",min);
LabelGet("ELabelBox10","Caption",rpt);
LabelGet("ELabelBox12","Caption",sure);
LabelGet("ELabelBox13","Caption",io);

VarGet("no",&no);

sprintf(tot,"%d^%s^%s^%s^%s",no,min,rpt,sure,io);

ListViewSet("ListView2","insert",tot);

ListViewSet( "ListView2" , "update" , 0 ); 

TimerSet("ETimer6","Enable","True");