//LAB6
//Dasgal 2
//n shirheg toog hereglegchees unshin husnegted hadgalj, husnegteesee oruulsan daraalliin esregeer hevlen haruul.
#include <stdio.h>
int main(){
	int n,i;
	int a[n];
	printf("array urt = ");
	scanf("%d",&n);
	for ( i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for ( i = n-1; i >= 0; i--)
		printf("a[%d] = %d  ",i, a[i]);
}
