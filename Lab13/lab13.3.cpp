#include <stdio.h>
void find();
void find (int a[] , int n, int *addr ,int *addr1)
{
	*addr = 0;
	*addr1 = 0;
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i]%2==0)
			*addr = *addr+1;
		else
			*addr1 = *addr1+1;
	}
}
void read(int a[], int n)
{
	int i;
	for( i=0; i<n; i++)
	scanf("%d", &a[i]);
}
void print(int a[], int n)
{
	int i; 
	for(i=0; i<n; i++)
	printf("%d",a[i]);
}
int main ()
{
	printf("Garaas oruulsan 5 toonii tegsh sondgoig toolj haruulna\n");
int a[100];
read(a, 5) ; // lab 9.3 - iin read , print funkts
print(a, 5) ;
int x, y;
find (a, 5 , &x, &y);
printf("\n");
printf (" tegsh toonuudiin too: %d\n", x) ;
printf (" sondgoi toonuudiin too: %d\n", y) ;
return 0;
}

