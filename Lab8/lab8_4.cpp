#include <stdio.h>
#include <string.h>
int main() {
char s[] = " hello ";
char s2[20] ="MUIS - iinhaan ";
int i;
for (i = 0; i < 5; i++)
strcpy (s2,s);

printf ("%s", s2) ;
return 0;
}
