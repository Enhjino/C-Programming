#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Trangle {
float a; float b; float c;
};
struct Trangle t1;
struct Trangle t2;
double find_area(Trangle g);
int main()
{
	puts("Ehnii gurvaljinii taluudiin urtiig oruulna uu?");
	scanf("%f%f%f", &t1.a, &t1.b, &t1.c);
	puts("Hoyr dahi gurvaljinii taluudiin urtiig oruulna uu?");
	scanf("%f%f%f", &t2.a, &t2.b, &t2.c);
	if(find_area(t1)>find_area(t2))
		printf("\nEhnii gurvaljin tom");
	else 
		printf("\nHoyr dahi gurvaljin tom");
}
double find_area(Trangle g)
{
	float p,s;
	p = (g.a+g.b+g.c)/2;
	s = sqrt(p*(p-g.a)*(p-g.b)*(p-g.c));
	return s;
}

