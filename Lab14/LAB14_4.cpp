#include <stdio.h>
void *find(int *begin, int *end, int x, int y)
{
	int *i, n=0;
	for( i = begin; i < end; i++)
	{
		if ( *i == x)
			*i = y;
	}

} 
void read(int a[] ,int n ){
	for(int i = 0 ; i<n ; i++){
		scanf("%d" ,a+i);		
	}
}
void print(int a[], int n){
	for(int i = 0 ; i<n ; i++){
		printf("%d " , *(a+i));
	}
}
int main ()
{
	int a[100],n;
	printf("Massive heden elementtei ve?\n");
	scanf("%d",&n);
	printf("elementuudiig oruul:\n");
	read(a,n);
	int y, x;
	printf ("xaix too: ") ;
	scanf("%d", &x);
	printf("solih too: ");
	scanf("%d", &y);
	find(a,a + 5, x,y) ;
	print(a,n);
		
}
