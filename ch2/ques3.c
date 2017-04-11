# include <stdio.h>
int main(int argc, char const *argv[])

{
	int yr;

	printf("Enter a Year\n");
	scanf("%d",&yr);

	if(yr % 100 == 0)
	{  
		if(yr % 400 ==0)
			printf("Leap Year\n");
		else
			printf("Not a leap Year\n");

	}
	else
	{
		if(yr % 4 ==0)
			printf("\nLeap year\n");
		else
			printf("\nNot a Leap Year\n");
	}

printf("\n\nPress any Key to Exit\n");

}