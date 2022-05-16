//LAB6
//Dasgal 4
/*n shirheg toonuudiig garaas unshin husnegted hadgalaj, daraa ni x toog hereglegchees
 unshin tuhain husnegted baigaa esehiig shalgan bairlaliin dugaariig hevlen haruulna.
 Baihgui bol "-1"-iig hevle. */
#include <stdio.h>
int main() {
	int n, a[100],i,x,k=0;
	printf("n = ");
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	printf("\nHaih too:\nx = ");
	scanf("%d", &x);
	for(i = 0; i < n; i++){
		if(x == a[i]){
		printf("\na[%d]=%d\n",i,x);
		k++;
		}
	}
	k==0 && printf("-1");
	return 0;
}
