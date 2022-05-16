//lab4 Angid
// Dasgal 3
// (x1, y1), (x2,y2), (x3,y3) gesen 3 tseg ogogdohod koordinatiin ehees hamgiin oir, hol orshih 2 tsegiig ol.

#include <stdio.h>
#include <math.h>
int main(){
	int x1,x2,x3,y1,y2,y3;
	float g1,g2,g3;
	printf("(x1,y1), (x2,y2), (x3,y3) gesen 3 tseg ogogdohod koordinatiin ehees hamgiin oir, hol orshih 2 tsegiig olno.\n");
	printf("\nx1, y1 iin utgiig oruulna uu\n");
	printf("x1 = ");
	scanf("%d",&x1);
	printf("y1 = ");
	scanf("%d",&y1);
	printf("\nx2, y2 iin utgiig oruulna uu\n");
	printf("x2 = ");
	scanf("%d",&x2);
	printf("y2 = ");
	scanf("%d",&y2);
	printf("\nx3, y3 iin utgiig oruulna uu\n");
	printf("x3 = ");
	scanf("%d",&x3);
	printf("y3 = ");
	scanf("%d",&y3);
	g1 = sqrt(pow(x1,2)+pow(y1,2));
	g2 = sqrt(pow(x2,2)+pow(y2,2));
	g3 = sqrt(pow(x3,2)+pow(y3,2));
	if( g1 >= g2)
	{
		if (g1 >= g3){
			(g2 >= g3) ? printf("\nkoordinatiin ehees hamgiin oir orshih tseg (%d,%d) \n\nkoordinatiin ehees hamgiin hol orshih tseg (%d,%d)",x3,y3,x1,y1)
			: printf("\nkoordinatiin ehees hamgiin oir orshih tseg (%d,%d) \n\nkoordinatiin ehees hamgiin hol orshih tseg (%d,%d)", x2,y2,x1,y1);
		}
		else{
			printf("\nkoordinatiin ehees hamgiin oir orshih tseg (%d,%d) \n\nkoordinatiin ehees hamgiin hol orshih tseg (%d,%d)", x2,y2,x3,y3);
		}
	}else if (g3 >=g2) {
			printf("\nkoordinatiin ehees hamgiin oir orshih tseg (%d,%d) \n\nkoordinatiin ehees hamgiin hol orshih tseg (%d,%d)",x1,y1,x3,y3);
		}else if (g1 >= g3)
				printf("\nkoordinatiin ehees hamgiin oir orshih tseg (%d,%d) \n\nkoordinatiin ehees hamgiin hol orshih tseg (%d,%d)",x3,y3,x2,y2);
			else
				printf("\nkoordinatiin ehees hamgiin oir orshih tseg (%d,%d) \n\nkoordinatiin ehees hamgiin hol orshih tseg (%d,%d)",x1,y1,x2,y2);
}
