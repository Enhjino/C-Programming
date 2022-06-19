#include <stdio.h>
#include <string.h>
int is_valid(char pwd[]);
	int a=0, n=0, s=0;
int main(){
	char s[200];
	gets(s);
	switch(is_valid(s))
	{
		case 0 : printf("Nuuts ug chanariin shaardlaga hangaj baina."); break;
		case 1 : printf("Urt ni dor hayj 6 baihiig anhaarana uu!");	break;
		case 2 : printf("Dor hayj neg tom useg orson baihiig anhaarna uu!"); break;
		case 3 : printf("Ydaj 3 shirheg too baihiig anhaarna uu!"); break;
		case 4 : printf("?,!,$,*,(-),-,+ temdegtuudiin ydaj neg ni baih ystoig anhaarna uu!");break;
	}
}

int is_valid(char pwd[])
{
int i;
	for(i=0; i<strlen(pwd); i++)
		{
		 if('A'<pwd[i]&&pwd[i]<'Z')
		  a++;
		if('0'<pwd[i]&&pwd[i]<'9')
			n++;
		if('!'<pwd[i]&&pwd[i]<'/')
			s++;
		}
	if(strlen(pwd)>=6)	
		if(a>=1)
			if(n>=3)
				if(s>=1)
				return 0;
				else 
				return 4;
			else 
			return 3;
		else 
		return 2;
	else 
	return 1;				
}

