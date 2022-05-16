#include <stdio.h>
#include <string.h>
int main() {
char a[20],b[20];
puts("a string :");
gets(a);
puts("b string :");
gets(b);
strcat(a,b);
printf ("a+b string = %s", a) ;
return 0;
}
