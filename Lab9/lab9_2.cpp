#include <stdio.h>
void read(int[],int);
void print(int[],int);

void read(int a[], int n)
{
	int i;
	for( i = 0; i < n; i++)
	scanf("%d", &a[i]);
}
void print(int a[], int n)
{
	int i; 
	for(i = 0; i < n; i++)
	printf("%d", a[i]);
}

int main()
{
	int n,m, a[100], b[100];
	scanf("%d",&n);
	read(a,n);
	printf("\n");
	scanf("%d",&m);
	read(b,m);
	print(a,n);
	printf("\n");
	print(b,m);
}

