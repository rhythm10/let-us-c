# include <stdio.h>

int main(int argc,char const *argv[])

{
     
     int l, b, r, rec_area, perimeter;
     float cir_area, circum; 

	printf("Enter Lenght of Rectangle = ");
	scanf("%d", &l);

	printf("Enter Breadth of Rectangle = ");
	scanf("%d", &b);

	rec_area = l * b;
	perimeter = 2 * (l + b);

	printf("Area of rectangle = %d\n",rec_area);
    printf("Perimeter of rectangle = %d\n",perimeter);
    

    printf("Enter Radius of circle = ");
    scanf("%d",&r);

    cir_area = 3.14 * r * r;
    circum = 2 * 3.14 * r;

    printf("Area of Cirle = %f\n", cir_area);
    printf("Circumference of Circle = %f\n",circum);

    printf("\n\n\n\nPress any key to exit..\n");

}


