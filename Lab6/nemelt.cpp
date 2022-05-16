//lab6
//nemelt
#include <stdio.h>
int main()
{
int n,m,a[100],b[100],i,j,k;
	printf("n = ");
	scanf("%d", &n);
	printf("m = ");
	scanf("%d", &m);
	printf("\n");
	for(i = 0; i < n; i++)
			{
			printf("a[%d] = ",i);	
			scanf("%d",&a[i]);
			}	
	printf("\n");
	for(i = 0; i < m; i++)
			{
			printf("b[%d] = ",i);
			scanf("%d",&b[i]);
			}	
	printf("\n");
	printf("Hariu : \n");
	for(i = 0; i < n; i++){
		for (j=0; j < m; j++){
			a[i]==b[j] && printf("        a[%d] = b[%d] = %d  \n",i,j,a[i]);
		}
	}
}
