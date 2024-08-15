#include "stk.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


char saat[200],alarm[200],control[200],gpo[200],sure[200],outpc[200],saniye[20],sny[20];
int outp,controlint,kntrlint,sureint;
int say = 0;
char tot[200],listdata[200];
int listdataint;   
char kntrl[20];

VarGet("saat",saat);
 
 while(1){
 
    sprintf(tot,"Row%d",say);
    
    ListViewGetXY("ListView1" , 0 , say , listdata);
    printf(listdata);
    Convert_StringToInt(listdata,&listdataint);
   
    ListViewGetXY("ListView1" , 1 , say , alarm);
    printf(alarm);
    
    ListViewGetXY("ListView1" , 2 , say , outpc);
    Convert_StringToInt(outpc,&outp);
    outp = outp+2;    
    sprintf(gpo,"GPIO_%d",outp);
    
    ListViewGetXY("ListView1" , 3 , say , sure);
    printf(sure);
    Convert_StringToInt(sure,&sureint);
    sureint = sureint*1000;
    printf("%d",sureint);
        
    ListViewGetXY("ListView1" , 4 , say , saniye); 
    LabelSets("ELabel22",saniye);
    LabelGet("ELabel21","Text",sny);
    
    if(strcmp(saat,alarm)==0 && strcmp(saniye,sny)==0)
    {
        GPIO_Write(gpo,1);  
        BuzzerSet(500);
        Delay(sureint);
        GPIO_Write(gpo,0); 
        BuzzerSet(500);   
        printf("role kapatildi\n"); 
    } 


   if(listdataint==0)
    {
        printf("dongu bitti\n");
       break;
    }
   
   say++; 
       
 }
