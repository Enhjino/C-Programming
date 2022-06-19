#include <stdio.h>

int main()
{
	int x;
	int *addr;
	addr = &x;
	scanf("%d", addr);
	printf("%d\n",x);
	return 0;
}
