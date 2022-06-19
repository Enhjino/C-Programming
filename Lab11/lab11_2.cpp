#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Point
{
int x,y;	
};
struct Point a;
struct Point b;
double distance(Point a, Point b);
int main()
{
	puts("Ehnii tsegiin coordinatiig orul");
	scanf("%d%d",&a.x,&a.y);
	puts("Hoyr dahi tsegiin coordinatiig orul");
	scanf("%d%d",&b.x,&b.y);
	printf("Oruulsan 2 tsegiin hoorondoh zai = %f", distance(a,b) );	
	
}
double distance(Point a, Point b)
{
	float d;
	d = sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
	return d;
}
