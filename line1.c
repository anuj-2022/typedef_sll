#include <stdio.h>

int main()
{
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
#line 10
    printf( "after changing the line is %d, in file %s\n", __LINE__, __FILE__ );
#line 20 "hello.c"
    printf( "This code is on line %d, in file %s\n", __LINE__, __FILE__ );
    
}
