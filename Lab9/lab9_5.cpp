#include <stdio.h>
int power(int,int);
int main()
{
	int n,a;
	printf("a giin n zergiig olno\n");
	printf("a, n =  ");
	scanf("%d%d",&a,&n);
	printf("%d\n",power(a,n));
	printf("a, n =  ");
	scanf("%d%d", &a,&n);
	printf("%d\n", power(a,n));
	return 0;
}
int power(int a, int b)
{
	int i,t=1;
	for(i = 1; i <= b; i++)
	t *=a;
	return t;
}

//A1 void utga butsaadggui
//A2 function ee  zarlaagui
//A3 t = 1 function dotroo
