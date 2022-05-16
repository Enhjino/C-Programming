//lab 3 Angid
//Dasgal 6
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Taluudiin urtaar gurvaljing todorhoilno. \na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);	
	(a+b<c || a+c<b ||c+b<a) && printf("Iim taluudtai gurvaljin orshihgui.\n")
	||(a == b && b == c && a == c) && printf("zuv gurvaljin") 
	|| (a == b || b == c || a == c) && printf("adil hajuut ") 
	|| (a == b && b == c && a == c) || printf("eldev  talt");
}
