#include <stdio.h>

int main()
{
    printf("%d\n",1==5==5);//O/P : 0
 int i =0;
   printf("%d %d",i,i++);// O/P : 1,0
 int x=5;
   printf("%d %d %d\n",x++,x++,x++);// O/P : 7 6 5 after evalution of one variable the value is incremented
int x=2;
   printf("%d   ",++x++);// O/P : error lvalue required
   printf("%d\n",x++);// O/P : 2
 int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");// O/P : 1==1 TRUE
 int i=5;
   i=i++ - --i + ++i;
   printf("i=%d\n",i);// O/P : 6
 int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);// O/P : 4
 int x=10,y=5,p,q;
   p=x>9;//p=0
   q=p||(x=5,y=10);//q=0||1
   printf("%d %d %d\n",q,x,y);// O/P : 1 10 5
 int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);// O/P : 8 9
 int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);// O/P : 13
 int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);// O/P : 0
 int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);// O/P : 4
 int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);// O/P : error lvalue
 printf("%x\n",-1>>4);// O/P : ffffffff
    printf("%x\n",-1<<4);// O/P : fffffff0
 int x=7;
    x=(x<<=x%2);x==7<<=1;
    printf("%d\n",x);// O/P : 14
 int a=2,b=5,c=1;// 5>=1;
    printf("%d\n",(b>=a>=c?1:0));// O/P : 1
 int a=5;
    a=a-~a +1;
    printf("%d\n",a);// O/P : 12
 int a,b,c,x;
  a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(-- c/3);
    printf("%d\n",x);// O/P : 0
    a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);// O/P : error
 int i=5;
    i=i++ - i;//++ has higher presendency
    printf("%d",i);// O/P : -1 

    return 0;
}

