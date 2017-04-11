# include <stdio.h>
int main(int argc,char const *argv[]) 

{

	float cent, fr ;

	printf("Enter Temperature in F = ");
	scanf("%f",&fr);

	cent = 5.0/9.0 * (fr - 32);

	printf("Temperature in C = %f", cent);

	printf("\n\n\nPress any key to exit...\n");

}