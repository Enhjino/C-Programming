//lab 6 
//dasgal 6
#include <stdio.h>
int main() {
	int n,m,a[100][100],i,j,x,k=0;
	printf("n = ");
	scanf("%d", &n);
	printf("m = ");
	scanf("%d", &m);
	for(i = 0; i < m;i++){
		for(j=0; j < n; j++){
			printf("a[%d][%d] = ",i,j);
			
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nHaih too:\nx = ");
	scanf("%d",&x);
	printf("\n");
	for(i = 0; i < m; i++){
		for(j = 0;j < n; j++){
			switch(a[i][j]==x){
				case 1: printf("a[%d][%d]\n",i,j);
				k++;
				break;
			}
		}
	}
	k==0 && printf("-1");
}
