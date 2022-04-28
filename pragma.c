#include<stdio.h>  
#include<stdlib.h>  
  
void func() ;  
  
#pragma startup func  
#pragma exit func  
  
void main(){  
printf("\nI am in main");  
  
}  
  
void func(){  
printf("\nI am in func");  
  
}  
