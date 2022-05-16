#include <stdio.h>
#include <string.h>
int main(){
	printf("Oguulberee oruulna uu? \n");
	char o[150];
	gets(o);
	int i;
	for( i = 0; i < strlen(o); i++){
		o[i]==' ' ? printf("\n") : printf("%c",o[i]);
		
	}
}
