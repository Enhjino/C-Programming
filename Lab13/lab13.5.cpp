#include <stdio.h>

struct Triangle 
{	
	int a, b,c;
}; 
void read(struct Triangle *p)
{
	scanf("%d",&p->a);
	scanf("%d",&p->b);
	scanf("%d",&p->c);		
}
void print(struct Triangle *p)
{
	printf("%d ", p->a);
	printf("%d ", p->b);
	printf("%d ", p->c);
}
int main()
{
	printf("Gurvaljinii taluudiig oruulna uu?\n");
	struct Triangle g;
	read(&g);
	printf("Gurvaljinii taluud:\n");
	print(&g);
}
