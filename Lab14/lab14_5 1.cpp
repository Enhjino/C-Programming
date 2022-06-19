#include <stdio.h>

void reverse(int *begin , int *end)
{
	int tmp;
	for(int i = 0 ; i <((end-begin)/2); i++){
		tmp =  *(end-i-1);
		*(end-i-1) = *(begin+i);
		*(begin+i)=tmp;
	}
	
}
int main ()
{
int a[5] = {3 , 7 , 1 , 2 , 4};
reverse(a+2, a + 5);
int i;
for(i = 0; i < 5; i++)
printf("%d ", a[i]) ; // 1 7 3 2 4
return 0;
}
