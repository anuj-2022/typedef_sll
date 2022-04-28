#include <stdio.h>

// Macro definition
#define TRUE 1
#define FALSE 0


int main()
{
    printf("TRUE: %d\n", TRUE);
    printf("FALSE: %d\n", FALSE);

    // Undefine a previously defined macro
    #undef TRUE
    #undef FALSE

    // Re-define macro values
    #define TRUE 0
    #define FALSE 1

    printf("\nMacro values are redefinition\n");
    printf("TRUE: %d\n", TRUE);
    printf("FALSE: %d\n", FALSE);

    return 0;
}
