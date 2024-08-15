#include "stk.h"
#include "stdio.h"
#include "string.h"

int no,a,outpint;
char hour[5],min[5],outp[5],total[30],saat[20],data1[200],sure[200],x[20];
char saniye[20];
int saniyeint;

LabelGet("ELabelBox1","Text",hour);
LabelGet("ELabelBox3","Text",min);
LabelGet("ELabelBox5","Text",outp);
LabelGet("ELabelBox7","Text",sure);


VarGet("sure",x);
VarGet("EVar1",&a);//int
VarGet("EVar2",&no);//int
VarGet("EVar3",&data1);//str
VarSet("EVar3",outp);
VarSet("sure",sure);

LabelSets("ELabel19",sure);

sprintf(saat , "%s:%s" , hour , min);
VarSet("EVar4",saat );


LabelGet("ELabel21","Text",saniye);
//Convert_StringToInt(saniye,&saniyeint);
//VarSeti("saniye",saniyeint);
//LabelSeti("ELabel22",saniyeint);

sprintf(total,"%d^%s^%s^%s^%s",no,saat,outp,sure,saniye);

ListViewSet("ListView1","insert",total);

ListViewSet( "ListView1" , "update" , 0 ); 


