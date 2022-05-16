//lab5 Angid
//Dasgal 4
// 1 ees n hurtelh tegsh toonuudiiin niilberiig ol.
#include <stdio.h>
int main(){
	int i, n, s = 0;
	printf("1 ees n hurtelh tegsh toonuudiiin niilberiig olno.\n\nn = ");
	scanf("%d",&n);
	printf("\n");
	for ( i = 0; i <= n; i = i + 2) {
		s = s + i;
	}
	printf("%d hurtelh tegsh toonuudiin niilber = %d",n,s);
	return 0;
}
