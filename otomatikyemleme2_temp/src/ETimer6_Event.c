#include "stk.h"
#include "stdio.h"
#include "string.h"
#include "stdlib.h"

char saat[200],gpo[200],sure[200],outpc[200],min[200],rpt[200],tot[200],listdata[200];
unsigned char day , month , year , mins , hour ;
int outp,sureint,listdataint,rptint,minint;
int say     = 0  ;
int counter;


VarGet("cntr",&counter);

VarGet("saat1",saat);
//printf(saat);

dateGet(&day,&month,&year);
timeGet(&hour,&mins);

//printf("%d",mins);

while(1)
{
    printf("\n %d \n",counter);
    sprintf(tot,"Row%d",say);
    
    ListViewGetXY("ListView2" , 0 , say , listdata);
    Convert_StringToInt(listdata,&listdataint);
    printf("\n%d", listdataint );
    
    ListViewGetXY("ListView2" , 1 , say , min );
    Convert_StringToInt(min,&minint);
    minint = minint*60000;
    printf("\n%d",minint);
    
    ListViewGetXY("ListView2" , 2 , say , rpt );
    Convert_StringToInt(rpt,&rptint);
    printf("\n%d",rptint);
    
    
    ListViewGetXY("ListView2" , 3 , say , sure);
    Convert_StringToInt(sure,&sureint);
    sureint = sureint*1000;
    printf("\n%d" ,sureint );        
    
    
    ListViewGetXY("ListView2" , 4 , say , outpc);
    Convert_StringToInt(outpc,&outp);
    outp = outp+2;    
    sprintf(gpo,"GPIO_%d",outp);
    //printf(gpo);
    
          
    if(mins >= 0 && mins <= 60 && counter <= rptint)
    {

        GPIO_Write(gpo,1);  
        printf("\nrole acildi\n");
        BuzzerSet(500);
        Delay(sureint);
        GPIO_Write(gpo,0); 
        printf("role kapatildi"); 
        BuzzerSet(500); 
        printf("\n%d second wait\n",minint);
        Delay(minint);
    
    }
    

    
    
       if(listdataint==0)
    {
        printf("\ndongu bitti\n");
       break;
    }
   
   counter++;
   say++;
   
}

VarSeti("cntr",counter);


