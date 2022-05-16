//lab5 angid
//Dasgal 6
#include <stdio.h>
int main(){
	int n,s = 0,a = 0;
	printf("N toonii tsifruudiin niilberiig olno.\nN = ");
	scanf("%d",&n);
	do{
		a = n % 10; 
		s = s + a; 
		n = n / 10;
	}while ( n >= 1);
	printf("sum = %d",s);
}
