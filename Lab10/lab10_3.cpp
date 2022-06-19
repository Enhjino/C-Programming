#include <stdio.h>
#include <string.h>
int count(int a);
int b[100];
int main(){
	int n,i;
	scanf("%d",&n);
	printf("%d too %d shirheg huvaagchtai\n%d toonii huvaagchid:\n",n,count(n),n);
	for(i=0; i<count(n); i++)
	{
		printf("- %d\n",b[i]);
	}
}
int count(int a){
	int i, k=0;
	for(i=1; i<=a;i++)
	{
	if(a%i==0){
		b[k]= i;
		k++;
		}
	}
	return k; 
}
