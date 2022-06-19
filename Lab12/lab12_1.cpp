#include <stdio.h>
#include <string.h>
typedef struct {
	int d,m,y;
} Date;

Date read();
void print(Date a);
int less(Date a, Date b);

Date read(Date dt)
{
	printf("Oniig oruulna uu? ");
	scanf("%d",&dt.y);
	printf("Sariig oruulna uu? ");
	scanf("%d",&dt.m);
	printf("Udriig oruulna uu? ");
	scanf("%d",&dt.d);
	return dt;
}
void print(Date dt)
{
	if(dt.m>=10)
	{
		if(dt.d>=10)
			printf("%d/%d%/%d",dt.y,dt.m,dt.d);
		else 
			printf("%d/%d/0%d",dt.y,dt.m,dt.d);
	}
	else
	{
		if(dt.d>=10)
			printf("%d/0%d%/%d", dt.y,dt.m,dt.d);
		else 
			printf("%d/0%d/0%d",dt.y,dt.m,dt.d);
	}
}

int less(Date a, Date b)
{
	if(a.y<b.y) //2003<2002 2002<2003
	{
		return 1;
	}else if(a.y==b.y) //2002=2002
		{
		if(a.m<b.m) //2<3
			return 1;
		else if (a.m==b.m)
			{
			if(a.d<b.d)
				return 1;
			}
			}
			else 
				return 0;
		
}

int main()
{		
	Date dd,a,b;
	dd = read(dd);
	print(dd);
	printf("\n");
	a = read(a);
	printf("\n");
	b = read(b);
	printf("Iluu deer uy ni: ");
	if(less(a,b)==1)
		print(a);
	else 
		print(b);
	
	
}
