#include <stdio.h>
#include <string.h>
int main(){
	
	printf("Temdegtiin tsuvaa oruulna uu?\n");
	char s[100];
	gets(s);
	int i,count = 0;
	for (i = 0; i < strlen(s); i++){
		switch (s[i]) {
			case 'a': count++;
			break;
			case 'i': count++;
			break;
			case 'o': count++;
			break;
			case 'e': count++;
			break;
			case 'u': count++;
			break;
			case 'y': count++;
			break;
			case 'A': count++;
			break;
			case 'I': count++;
			break;
			case 'O': count++;
			break;
			case 'E': count++;
			break;
			case 'U': count++;
			break;
			case 'Y': count++;
			break;	
		}}
	printf("Temdegtiin tsuvaand %d shirheg egshig useg orson bn.", count);
}
