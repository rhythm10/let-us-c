# include <stdio.h>
int main(int argc, char const *argv[])
									
{
	int side1, side2, side3, h;

	printf("\n\nEnter all 3 sides of a Triangle = \n");
	scanf("%d%d%d",&side1,&side2,&side3);

	if(side1==side2 && side1==side3)
	{
		printf("\nEquilateral triangle ");
	}

	else if(side1==side2||side2==side3||side1==side3)
	{
	printf("\ntriangle is isoscelses ");
	}

	else if(side1!=side2 && side2!=side3 && side1!=side3)
	printf("\n triangle is scalene");

	if(side1>side2 && side1>side3)
	{
	h=(side2*side2+side3*side3);

	if(side1==h)
	printf("\ntriangle is right angled triangle");

	else
	printf("\ntriangle is not right angled triangle");
	}
	else if(side2>side1&&side2>side3)
	{
	h=(side1*side1+side3*side3);

	if(side2 == h)
	printf("\ntriangle is right angled triangle");

	else
	printf("\ntriangle is not right angled triangle");
	}

	else if(side3>side1&&side3>side2)
	{
	h=(side1*side1+side2*side2);

	if(side3==h)
	printf("\ntriangle is right angled triangle");
	else
	printf("\ntriangle is not right angled triangle");
	} 

}