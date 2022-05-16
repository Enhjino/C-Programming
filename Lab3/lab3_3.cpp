//lab 3 Angid
//Dasgal 3
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("\"bolj bna\" gej hevlehiin tuld b < c < a baih ba a %% 3 ==0 bolon c %% 5 ==3 ali negiig hangaj baih too  a, b, c toog oruulna uu.\n Jishee ni a = 6, b = 10 , c = 8\n");
	printf("a = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	c < b && a < c && printf("bolj ");
	(a % 3 ==0 || c % 5 ==3) && printf("bna.\n");
	
}
