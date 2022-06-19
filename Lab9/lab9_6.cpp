# include <stdio.h>
int prime(int) ;
int prime_range(int,int);

int A[100];

int main () {
int i,a,b,k;
printf("Garaaas oruulsan 2 toonii hoorondoh niit anhnii toog haruulna\n");
scanf("%d%d", &a,&b) ;
printf("\n");
for (i=0 ; i < prime_range(a,b) ; i++){
	printf("%d  \n", A[i]);
}
printf ("%d ahnii too bna.\n",prime_range(a,b)) ;
return 0;
}

int prime(int n) 
{
	int i;
	for (i = 2; i < n; i++) {
	if (n % i == 0)
		return 0; 
	}
	return 1;
}

int prime_range(int a, int b)
{
	int i,k=0;
	for (i=a ; i <=b; i++){
		if(prime(i)==1){
		A[k]= i;
		k++;	
		}	
	}	
	return k;
}
