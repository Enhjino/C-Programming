#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	int n;
	int b[n],i,s=0;
	fp = fopen("input1.txt","r");
	fscanf(fp,"%d\n",&n);
	for(i=0; i<n;i++)
	{
		fscanf(fp,"%d",&b[i]);
		s = s + b[i];
	}
	fclose(fp);
	fp = fopen("output1.txt", "w");
	fprintf(fp,"%d\n",s);
	fclose(fp);
	return 0;
}
