#include<stdio.h>

typedef struct student 
{
    int roll_no;
    char name[10];
    int class;
} ID;
int main()
{
    ID s;
    s.roll_no=55;
    printf("roll no is : %d\n", s.roll_no);
    return 0;
}
