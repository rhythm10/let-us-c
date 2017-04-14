# include <stdio.h>
int main(int argc, char const *argv[])

{
	int year;

	printf("\nEnter A Year = ");
	scanf("%d",&year);

	if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		printf("\nLeap Year");
	else
		printf("\nNot a leap year");

}
