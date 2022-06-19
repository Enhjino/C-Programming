#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int a,b,s;
	fp = fopen("input.txt","r");
	fscanf(fp,"%d\n%d",&a,&b);
	//fprintf(fp,"%d %d\n",a,b);
	fclose(fp);
	s = a+b,
	fp = fopen("output.txt", "w");
	fprintf(fp,"%d+%d=%d\n",a,b,s);
	fclose(fp);
	return 0;
}
