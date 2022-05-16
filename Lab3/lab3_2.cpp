//lab 3 Angid
//Dasgal 2
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Hoyr toog garaas avch ehleed bagiig ni daraa ni ihiig hevlej haruulna. \na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	c = (a > b) * a + (a <= b) * b;
	c = (a + b) - c;
	printf("%d\t", c);
	c = (a + b) - c;
	printf("%d", c);
}
