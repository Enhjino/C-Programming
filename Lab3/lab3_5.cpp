//lab 3 Angid
//Dasgal 5
#include <stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("Gurvan toog garaas avch ih, baga, dund taliig olno. \na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	d = (a > b) * a + (a <= b) * b;
	e = (a > c) * a + (a <= c) * c;
	d == e && printf("ih = %d, ", d);
	d == e && c > b && printf("dund = %d, ",c) && printf("baga = %d",b) ||
	d == e && c < b && printf("dund = %d, ",b) && printf("baga = %d",c);
	d != e && d > e && printf("ih = %d, ", b) && (a < c && printf("dund = %d, ",c) && printf("baga = %d",a)) || (a > c && printf("dund = %d, ",a) && printf("baga = %d",c)) ||
	d != e && d < e && printf("ih = %d, ",c) && (a > b && printf("dund = %d, ",a) && printf("baga = %d",b)) || (a < b && printf("dund = %d, ",b) && printf("baga = %d",a));
}
	
