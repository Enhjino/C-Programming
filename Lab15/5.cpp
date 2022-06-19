#include <stdio.h>
#include <stdlib.h>
struct Student 
{
	char fname[20], lname[20], id[10];
	float golch;
};
void read(struct Student *s, int n)
{
	int i;
	for(i=0;i<n;i++){
	printf("%d dh oyutnii id, ner, ovog, golchiig oruulna uu\n", i+1);
	scanf("%s", &s[i].id);
	scanf("%s", &s[i].lname);
	scanf("%s", &s[i].fname);
	scanf("%f", &s[i].golch);
		
	}

}
int main()
{
	Student a[100], b[100];
	FILE *fp;
	int n,m,i;
	scanf("%d",&n);
	read(a,n);
	fp = fopen("student.txt", "w");
	for(i=0;i<n;i++)
	{
	fprintf(fp,"Oyutan #%d\n",i+1);
	fprintf(fp,"id: 	%s\n", a[i].id);
	fprintf(fp,"ner: 	%s\n", a[i].lname);
	fprintf(fp,"ovog: 	%s\n", a[i].fname);
	fprintf(fp,"golch: 	%f\n", a[i].golch);
	}
	
}
