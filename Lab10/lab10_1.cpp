#include <stdio.h>
#include <string.h>
int count(char s[]);
int main(){
	char s[200];
	gets(s);
	printf("%d n shirheg egshig baina.",count(s));
}
int count(char s[]){
		int i, count=0;
		for(i = 0; i < strlen(s); i++){		
			switch(s[i])
			{
			case 'a':
				count++;
				break;
			case 'e':
				count++;
				break;
			case 'i':
				count++;
				break;
			case 'o':
				count++;
				break;
			case 'u':
				count++;
				break;
			case 'y':
				count++;
				break;
			case 'A':
				count++;
				break;
			case 'E':
				count++;
				break;
			case 'I':
				count++;
				break;
			case 'O':
				count++;
				break;
			case 'U':
				count++;
				break;
			case 'Y':
				count++;
				break;
			}}
			return count;
}

			
