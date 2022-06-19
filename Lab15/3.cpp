#include <stdio.h>
#include <stdlib.h>

int *find_divisors(int n)
{
	int *p,i,c=0;
	p = (int*)malloc(sizeof(int)*n);
	for(i=1; i<=n; i++)
	if(n%i==0)
	{
		p[c+1] = i;
		c++;
	}
	p[0] = c;			
	return p;
}

int main()
{
	int *a,n,i;
	printf("n toog oruulna uu? \nn = ");
	scanf("%d",&n);
	a = find_divisors(n);
	for (i=0; i <= *find_divisors(n); i++)
		printf("%d ",a[i]);
	free(a);
	
}
