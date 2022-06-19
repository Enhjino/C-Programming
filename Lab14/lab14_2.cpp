#include <stdio.h>

int size(int *begin, int *end)
{
	int *i,d=0;
	for(i = begin; i < end; i++)
		d++;
	return d;
	
}
int main()
{
	int i, n;
	scanf("%d", &n) ;
	int a[n];
	printf("%d\n", size(a, a + n) ) ; // n-ii utgiig xewlene .
	return 0;
}
