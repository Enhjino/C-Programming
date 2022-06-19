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
	printf("Oniig oruulna uu? ");
	scanf("%d",&dt[i].y);
	printf("Sariig oruulna uu? ");
	scanf("%d",&dt[i].m);
	printf("Udriig oruulna uu? ");
	scanf("%d",&dt[i].d);
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
	print(dd,n);

	
	
}
