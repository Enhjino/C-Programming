#include <stdio.h>
int min(int,int);
int min5(int,int,int,int,int);

int main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("min = %d", min(min(min(min(a,b),c),d),e));
}
int min(int a, int b)
{
	if(a < b)
	 return a;
 return b;
}
