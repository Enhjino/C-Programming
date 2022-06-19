#include <stdio.h>
#include <stdlib.h>
int main(){
	FILE *fp;
	int i, m=0, b[100];
	fp = fopen("student.txt", "r");
	while(!feof(fp))
	{
		fscanf(fp,"%c", &b[m]);
		m++;
	}
	for( i=0; i < m; i++)
	printf("%c",b[i]);
	return 0;
	
}
