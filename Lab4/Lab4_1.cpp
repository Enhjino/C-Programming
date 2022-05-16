//lab 4 Angid 
// Dasgaal 1
//n on undur jil esehiig shalga.

#include <stdio.h>
int main()
{
	int n;
	printf("Oruulsan jiliig undur jil esehiig shalgana.\n\nJilee oruulna uu?\n\n");
	scanf("%d",&n);
	if(n % 400 == 0 || (n % 4 ==0 && n % 100 != 0))
		printf("\n%d ni Undur jil mun",n);
	else
		printf("\n%d ni Undur jil bish",n);
	
}
