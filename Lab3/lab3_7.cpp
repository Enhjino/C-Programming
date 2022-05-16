//lab 3 Angid
//Dasgal 7
#include <stdio.h>
int main()
{
	int x;
	printf("int toog garaas avch heden orontoi bolohiig haruulna.\n x = ");
	scanf("%d",&x);
	x < 10 && printf("%d too 1 orontoi.",x) 
	|| x >= 10 && x <= 99 && printf("%d too 2 orontoi.",x) 
	|| x >= 100 && x <= 999 && printf("%d too 3 orontoi.",x) 
	|| x >= 1000 && x <= 9999 && printf("%d too 4 orontoi.",x)
	|| x >= 10000 && x <= 99999 && printf("%d too 5 orontoi.",x)
	|| x >= 100000 && x <= 999999 && printf("%d too 6 orontoi.",x)  
	|| x >= 1000000 && x <= 9999999 && printf("%d too 7 orontoi.",x)
	|| x >= 10000000 && x <= 99999999 && printf("%d too 8 orontoi.",x)
	|| x >= 100000000 && x <= 999999999 && printf("%d too 9 orontoi.",x)
	|| x >= 1000000000 && x <= 9999999999 && printf("%d too 10 orontoi.",x);       
}
