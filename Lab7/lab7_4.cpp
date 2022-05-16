#include <stdio.h>
int main(){
	int n,m,i,j,c=0,k;
	printf("n x m hemjeest husnegtiin n, m iin utgiig oruulna uu?\n");
	scanf("%d%d",&n,&m);
	int a[n][m], b[m];
	printf("Husnegtiin elementuudiig oruulna uu?\n");
	for(i=0; i<n;i++){
		for(j=0; j<m; j++){
			printf("a[%d][%d] = ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	
	}
	for(i=0; i<n;i++){
		for(j=0; j<m; j++){
			printf("a[%d][%d] = %d    ",i+1, j+1,a[i][j]);;
			if(j==m-1)
				printf("\n\n");
		}
	}
	
	for(i=0; i<m;i++){
		for(j=0; j<n; j++){
			if(a[j][i]%2==0){
				c++;
			}
		}
		b[i]=c;
		c=0;
	}
	i=0;
	k=i;
	j=1;
	while(j<m){
			if(b[k]<b[j]){
				k=j;
			}
			j++;
		}
	
	printf("Hamgiin olon tegsh too aguulsan bagana = %d r bagana",k+1);	
}
