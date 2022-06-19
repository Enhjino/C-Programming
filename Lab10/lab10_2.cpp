#include <stdio.h>
#include <string.h>
int count(int a);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d too %d shirheg huvaagchtai",n,count(n));
}
int count(int a){
	int i, counter=0;
	for(i=1; i<=a;i++)
	{
		if(a%i==0)
			counter++;
	} 
	return counter;
}
