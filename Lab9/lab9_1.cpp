#include <stdio.h>
int is_even(int);
int main(){
	int i,n;
	scanf("%d",&n);
	printf("%d hurtelh sondgoi toonuud : \n",n);
	for (i = 0; i < n; i++){
		if( is_even(i)== 0)
			printf("%d ",i);
	}
	return 0;
}
int is_even(int n)
{
	if(n % 2 == 0)
		return 1;
	return 0;
}
