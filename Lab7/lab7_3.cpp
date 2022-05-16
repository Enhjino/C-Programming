#include <stdio.h>
int main()
{
	int n, i, k, j, t=0;
	float s=0;	
	printf("n = ");
	scanf("%d",&n);
	int a[n];
	printf("Husnegtend %d too oruulna uu?\n",n);
	for (i = 0; i < n; i++)
		scanf("	%d",&a[i]);
	for(i=0;i<(n/2);i++){
		j= n-1-i;
		if(a[i]== a[j]){
			t++;
		}
	}
	if(t==(n/2))
		printf("\npalindrome.");
	else 
		printf("\palindrome bish");
	}
