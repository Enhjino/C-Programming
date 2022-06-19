#include <stdio.h>
#include <string.h>
typedef struct {
	int d,m,y;
} Date;

Date read();
void print();
Date read(Date dt[],int a)
{
	int i;
	for(i=0; i < a; i++){
	printf("On:");
	scanf("%d",&dt[i].y);
	printf("Sar: ");
	scanf("%d",&dt[i].m);
	printf("Udur: ");
	scanf("%d",&dt[i].d);
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
void sort(Date a[] , int n)
{ 
	int i, j , k ;
	Date tmp;

for (i = 0; i < n; i++) {
	k = i;
		for (j = i + 1; j < n; j++) {
			if (less(a[j],a[k])==1) {
				k = j;
			}
		}		
tmp = a[k];
a[k] = a[i];
a[i] = tmp;
}
}
void print(Date dt[], int a)
{
	int i;
	for (i = 0; i < a; i ++)
	{
		if(dt[i].m>=10)
		{
		if(dt[i].d>=10)
			printf("%d/%d%/%d\n",dt[i].y,dt[i].m,dt[i].d);
		else 
			printf("%d/%d/0%d\n",dt[i].y,dt[i].m,dt[i].d);
		}
		else
		{
		if(dt[i].d>=10)
			printf("%d/0%d%/%d\n", dt[i].y,dt[i].m,dt[i].d);
		else 
			printf("%d/0%d/0%d\n",dt[i].y,dt[i].m,dt[i].d);
		}	
	}
	
}
int main()
{	
	Date dd[100];
	int n;
	puts("Heden udaa on sar odor hevleh ve?");
	scanf("%d",&n);	
	read(dd,n);
	sort(dd,n);
	print(dd,n);	
}
