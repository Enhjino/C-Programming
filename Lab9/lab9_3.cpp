#include <stdio.h>
int max(int[],int);
void read(int[],int);

void read(int a[], int n)
{
	int i;
	for( i = 0; i < n; i++)
	scanf("%d", &a[i]);
}
int max(int a[], int n)
{
	int i, max=a[0]; 
	for(i = 1; i < n; i++)
	{
		max < a[i] ? max = a[i] : max = max;
	}
	return max;
}
int main()
{
	printf("A, B husnegtiin hamgiin ih elementuudiig haritsuulan ali husnegt tom too aguulj baigaag olno.\n ");
	int n, a[100], b[100];
	printf("Husnegtnuud heden elementtei ve?\n");
	scanf("%d",&n);
	printf("A husnegtiin elementuudiig oruul\n");
	read(a,n);
	printf("B husnegtiin elementuudiig oruul\n");
	read(b,n);
	printf("Hamgiin tom too aguulj baigaa husnegt : ");
	max(a,n) > max(b,n) ? printf("A husnegt \nHamgiin ih too : %d", max(a,n)) : printf("B husnegt\nHamgiin ih too : %d", max(b,n));
}
