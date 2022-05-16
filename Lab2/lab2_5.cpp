//Lab 2 Angid

//Dasgal 5

#include<stdio.h>
#include<math.h>

main(){
	int a , b, c, d, e, j;
	float f;
	printf("*******************************************************************************\n");
	printf("a, b toog oruulna uu?\n");
	scanf("%d%d",&a, &b);
	c = a + b;
	d = a - b;
	e = a * b;
	f = (float)a / b;
	j = a % b;
	printf("a + b = %d\n", c);
	printf("a - b = %d\n", d);
	printf("a * b = %d\n", e);
	printf("a / b = %.2f\n", f);
	printf("a %% b = %d\n", j);
	printf("*******************************************************************************\n");
}
