#include<stdio.h>

int main()
{
    enum signal_colour{red, yellow, green};
    typedef enum signal_colour global_colour;
    global_colour serial = yellow;
    printf("ready to go %d\n",serial);
    return 0;
}

