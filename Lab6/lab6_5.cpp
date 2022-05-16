//lab6
//dasgal 5
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, x,i;
	printf("n shirheg too hereglegchees unshin husnegted hadgalj usuhuur erembelegdsen, buurahaar eremblegdsen, esvel eremblegdeegui bolohiig togtoono. \nn = ");
	scanf("%d",&n);
	int a[n];
	for ( i = 0 ; i < n; i++){
		printf("a[%d] = ",i);
        scanf("%d",&a[i]);		
	}
	for( i = 0; i < (n-1); i++){
	  if(a[i] > a[i + 1])
	   {
	  	if(i == (n-2))
		  {
	  		printf("Buurahaar eremblegdsen");
	   	  }
	    continue;
	   } else { 
	for( i = 0; i < (n-1); i++){
	  if(a[i] < a[i + 1]) {
	  	if(i == (n-2)){
	  		printf("Osohoor eremblegdsen");
	  	}
	  continue;
	  } else {
	   printf("Eremblegdeegui.");
	   break;}
	}break;
	}}}
