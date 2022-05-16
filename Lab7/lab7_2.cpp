#include <stdio.h>
int main()
{
	int n, i, k, j, tmp;
	float s=0;	
	printf("Angiin huuhduudiin toog oruulna uu?\n");
	scanf("%d",&n);
	int a[n];
	printf("%d huuhdiin ondoriig oruulna uu?\n",n);
	for (i = 0; i < n; i++)
		scanf("%d",&a[i]);
	for (i=0; i<n; i++){
		s = a[i]+s;
		k=i;
		for(j=i+1; j<n; j++){
			if(a[k]>a[j]){
				k=j;
			}
		}
		tmp = a[k];
		a[k] = a[i];
		a[i] =tmp;
		
	}
	s = s/n;
	printf("Dundaj undur = %f\nDundajaas deesh unduruud:\n",s);
	j = 0;
	for(i=0; i<n; i++){
		if(a[i]>s){
			printf("				%d\n", a[i]);
			j++;
		}
	}
	if(j == 0)
		printf("Baihgui.\n");
	printf("Angid dundjaas deesh undurtei %d huuhed baina.",j);
	return 0;
}
