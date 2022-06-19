#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Trangle {
float a; float b; float c;
};
struct Trangle t1;
struct Trangle t2;
float talbai(float a, float b, float c);
int main()
{
	puts("Ehnii gurvaljinii taluudiin urtiig oruulna uu?");
	scanf("%f%f%f", &t1.a, &t1.b, &t1.c);
	puts("Hoyr dahi gurvaljinii taluudiin urtiig oruulna uu?");
	scanf("%f%f%f", &t2.a, &t2.b, &t2.c);
	if(talbai(t1.a,t1.b,t1.c)>talbai(t2.a,t2.b,t2.c))
		printf("\nEhnii gurvaljin tom");
	else 
		printf("\nHoyr dahi gurvaljin tom");
}
float talbai(float a, float b, float c)
{
	float p,s;
	p = (a+b+c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}




