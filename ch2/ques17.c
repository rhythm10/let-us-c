# include <stdio.h>
int main(int argc, char const *argv[])
									
{
	int days;

	printf("\nEnter the days by which membership is late\n\n");
	scanf("%d",&days);

	if(days>0 && days<=5)
		printf("\n\nYour Fine is 50 paise\n");
	else if(days>=6 && days<=10)
		printf("\n\nYour fine is 1 Ruppee\n");
	else if(days>10 && days<=30)
		printf("\n\nYour fine is 5 Ruppee\n");
	else
		printf("\n\nYour membership has been cancelled\n");

	printf("\n\nPress any key to exit\n\n");

}
