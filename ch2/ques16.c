# include <stdio.h>
int main(int argc, char const *argv[])
									
{
	int hard, tensile;
	float carbon;

	printf("Enter Hardness of Steel = \n");
	scanf("%d",&hard);

	printf("Enter carbon content = \n");
	scanf("%f",&carbon);

	printf("Enter tensile strength = \n");
	scanf("%d",&tensile);

	if(hard>50 && carbon<0.7 && tensile>5600)
		printf("Its Grade is 10");
	if(hard>50 && carbon<0.7 && tensile<5600)
		printf("Its Grade is 9");
	if(hard<50 && carbon<0.7 && tensile>5600)
		printf("Its Grade is 8");
	if(hard>50 && carbon>0.7 && tensile>5600)
		printf("Its Grade is 7");
	if(hard>50 || carbon<0.7 || tensile>5600)
		printf("Its Grade is 6");
	if(hard<50 && carbon>0.7 && tensile<5600)
		printf("Its Grade is 5");

	printf("\n\nPress any kry to Exit\n\n");

}