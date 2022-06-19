#include <stdio.h>
#include <stdlib.h>
int *get_array(int n,int value)
{
	int *p;
	p =(int*)malloc(sizeof(int)*n);
	if (p==NULL){
		printf("Sanah oi xursengui!\n");
		exit(1);
	}
	int i;
	for(i=0; i<n; i++)
		p[i] = value;
	return p;
}
int main()
{
	int *a,n,i,value;
	printf("n = ");
	scanf("%d",&n);	
	printf("value = ");
	scanf("%d",&value);
	a = get_array(n,value);
	printf("Husnegt : ");
	for (i=0; i < n; i++)
		printf("%d ",a[i]);
	free(a);
	return 0;
}
