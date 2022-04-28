#include <stdio.h>

#define HYD 1
#define PUNE 2
#define DELHI  3

#define STATE DELHI

int main()
{
	#if STATE == DELHI
		printf("Selected country code is: %d\n", STATE);
        
	#elif STATE == PUNE
		printf("Selected country code is: %d\n", STATE);
        
	#else
		printf("Selected country code is: %d\n", STATE);
        
	#endif
	
	return 0;
}

