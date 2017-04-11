# include <stdio.h>

int main(int argc,char const *argv[])
{

	float inch, km, m, cm, ft;

	printf("Enter Distance Between 2 Cities in km : ");
	scanf("%f", &km);


	//Formula for converting km to m
	m = km * 1000;

	//Formula for converting m to cm
	cm = m * 100;

	//Formula for converting cm to inch
	inch = cm / 2.54;

	//Formula for converting inch into ft
	ft = inch / 12;


	printf("\nDistance in metre = %f\n", m);
	printf("\nDistance in centimetre = %f\n", cm);
	printf("\nDistance in feet = %f\n", ft);
	printf("\nDistance in inches = %f\n", inch);

	printf("\n\n\n\nPress any key to exit..\n");


}