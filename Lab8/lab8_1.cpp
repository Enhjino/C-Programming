#include <stdio.h>
#include <string.h>
int main(){
	char o[15],n[15], on[100],h[20],f[100];
	int y,m,d,nas;
	puts("Tanii ovog ?");
	gets(o);
	puts("Tanii ner ?");
	gets(n);
	puts("Tanii torson on sar odor ?");
	scanf("%d",&y);
	scanf("%d",&m);
	scanf("%d",&d);
	getchar();
	puts("Durtai ongo ?");
	gets(on);
	puts("Hobby yu ve ?");
	gets(h);
	puts("Choloot tsagaaraa yu hiidg ve ?");
	gets(f);
	nas = 2022 - y;
	printf("\n\n%s ovogtoi %s ni %d onii %d sariin %d odor torson. Odoo %d nastai. Tuunii durtai ungu bol %s . Ter choloot tsagaaraa %s . Tuunii hobby bol %s .",o,n,y,m,d,nas,on,f,h);
	return 0;
}
