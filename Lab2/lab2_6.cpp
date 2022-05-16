//Lab 2 Angid

//Dasgal 6 

#include<stdio.h>
#include<math.h>

main(){
	float a, b, c, d ;
	float f;
	printf("a toog oruulna uu \n");
	scanf("%f",&a);
	printf("b toog oruulna uu \n");
	scanf("%f",&b);
	printf("c toog oruulna uu \n");
	scanf("%f",&c);
	printf("d toog oruulna uu \n");
	scanf("%f",&d);
	f = sqrt(pow(a+b, 2) + d) / c;		
	printf("6-r dasgaliin tegshitgeliin shiid ni:\na=%.2f b=%.2f c=%.2f d=%.2f uyd %.2f baina.\n",a,b,c,d, f);
}
