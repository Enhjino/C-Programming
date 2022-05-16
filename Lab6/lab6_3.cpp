//LAB6
//Dasgal 3
// a husnegt, b husnegtiin toog c husnegted hadgalna.
#include <stdio.h>
int main()
{
	int n, m ,i ;
	printf("a husnegtiin elementiin too\nn = ");
	scanf("%d", &n);
	printf("b husnegtiin elementiin too\nm = ");	
	scanf("%d",&m);
	int  a[n], b[m], c[200];
	for( i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		c[i] = a [i];
	}
	printf("\n\n");
	for( i = 0; i < m; i++){
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
		c[n+i] = b[i];
	}
	printf("\n\n");
	printf("c husnegt:\n");
	for (i = 0; i < n + m ; i++)
	printf("c[%d] = %d \n",i, c[i]);
}
