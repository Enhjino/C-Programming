#include <stdio.h>
#include <string.h>
 int main(){
 	char a[15],b[15];
 	puts("Hoyr temdegt mor oruulna uu");
	gets(a);
	gets(b);
	int i, count = 0;
	if(strlen(a)==strlen(b)){
		for (i = 0; i < strlen(a); i++ ) {
			a[i]==b[i] ? count++ : count = count;
		}
		count == strlen(a) ? printf("Hoyr temdegt mor yg adilhan baina.") : printf("Hoyr temdegt mor oor baina.");
	}else {
		printf("Hoyr temdegt mor oor baina.");
	}
	
 }
