# include <stdio.h>
int main(int argc, char const *argv[])

{
	int l, b, area, perimeter, n;

	printf("Enter Lenght & Bredth of Rectangle = ");
	scanf("%d%d",&l,&b);

	area = l * b;
	printf("Area of a Rectangle = %d",&area);

	n = 2;

	perimeter = n * ( l + b );
	printf("Perimeter of a Reactangle = %d",&perimeter);

	if(area > perimeter)
		printf("Area of Rectnagle is greater than its Perimeter\n");
	else 
		printf("Area of Rectangle is smaller than its perimeter\n");

}