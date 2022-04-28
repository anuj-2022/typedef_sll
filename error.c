#include<stdio.h>  
#ifndef __MATH_H  
#error First include then compile //first include math.h file 
#else  
void main(){  
    float a;  
    a=sqrt(7);  
    printf("%f",a);  
}  
#endif  
