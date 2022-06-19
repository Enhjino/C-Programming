#include <stdio.h>
void read(int a[], int n)
{
	int i;
	for(i=0; i< n; i++)
		scanf("%d",&a[i]);
}

void print(int a[], int n)
{
	int i;
	for ( i=0; i<n; i++)
		printf("%d", a[i]);
	printf("\n");
}
float modul(float x)
{
	float a;
	if(x<0)
		a = -x;
	else 
		a = x;
	return a;
}
int sum(int a[], int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
		s = s + a[i];
	return s;
}
float avg(int a[], int n)
{
	float s;
	s = (float)sum(a,n)/n;
	return  s;	
}
float product(float a[], int n)
{
	int i; float p=1;
	for(i=0; i<n;i++)
		p=p*a[i];
	return p;
}
int main()
{
	int a[100], n;
	float b[100];
	printf("n toonii utgiig oruul: ");
	scanf("%d", &n);
	read(a,n);
	printf("Tanii oruulsan daraalal: ");
	print(a,n);
	int i;
	float mu;
	mu = avg(a,n);
	printf("mu-iin utga: %.3f\n",mu);
	for(i=0; i<n; i++)
		b[i]= modul(a[i]-mu);
	float alpha;
	alpha = product(b,n);
	printf("alpha-iin utga: %.3f\n",alpha);
	return 0;
}
