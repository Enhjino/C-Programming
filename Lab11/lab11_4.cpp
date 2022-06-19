#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Rational{
int d, n;
};
struct Rational r1;
struct Rational r2;
struct Rational g;
typedef struct Rational Rational;
Rational add(Rational a, Rational b);
Rational sub(Rational a, Rational b);
Rational mult(Rational a, Rational b);
Rational div(Rational a, Rational b);
Rational simplify(Rational a);
void print(Rational a); 

int hieh(Rational a)
{
	int i,h=1;
	for(i=2; i <= a.n && i <= a.d; i++){
		if(a.d%i==0 && a.n%i==0)
			h = i;
	}
	return h;
		
}

int main()
{
	puts("Ehnii butarhain hurtver ba huvaariin utgiig oruulna uu");
	scanf("%d%d",&r1.d, &r1.n);
	puts("Hoyr dahi butarhain hurtver ba huvaariin utgiig oruulna uu");
	scanf("%d%d",&r2.d, &r2.n);
	puts("Niilber");
	 print(add(r1,r2));
	puts("Ylgavar");
	 print(sub(r1,r2));
	puts("Urjver");
	 print(mult(r1,r2));
	puts("Noogdvor");
	 print(div(r1,r2));
	puts("Huraah");
	print(simplify(r1));
	print(simplify(r2));
}
void print(Rational a)
{
	printf("%d / %d\n",a.d,a.n);
}
Rational add(Rational a, Rational b)
{
	Rational g;
	g.n = a.n * b.n;
	g.d = a.d*b.n+b.d*a.n;
	return g;
}
Rational sub(Rational a, Rational b)
{	
	g.n = a.n * b.n;
	g.d = a.d*b.n-b.d*a.n;
	if(g.d == 0 )
		g.n == 0;	
	return g;
}
Rational mult(Rational a, Rational b)
{	
	g.n = a.n*b.n;
	g.d = a.d*b.d;
	return g;	
}
Rational div(Rational a, Rational b)
{	
	g.n = a.n* b.d;
	g.d = a.d*b.n;
	return g;
}
Rational simplify(Rational a)
{
	a.n = a.n/hieh(a);
	a.d = a.d/hieh(a);
	return a;
}

