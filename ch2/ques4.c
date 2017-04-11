# include <stdio.h>
int main(int argc, char const *argv[])

{
	int leapdays, firstday, yr;
	long int normaldays, totaldays;

	printf("Enter year");
	scanf("%d",&yr);

	normaldays = (yr-1) * 365L;
	leapdays = (yr-1)/4- (yr-1)/100 + (yr-1)/400;
	totaldays = normaldays + leapdays;
	firstday = totaldays % 7;

	if(firstday == 0)
		printf("\nMonday");

	if(firstday == 1)
		printf("\nTuesday\n");

	if(firstday == 2)
		printf("\nWednesday\n");

	if(firstday == 3)
		printf("\nThursday\n");

	if(firstday == 4)
		printf("\nFriday\n");

	if(firstday == 5)
		printf("\nSaturday\n");

	if(firstday == 6)
		printf("\nSunday\n");
 
}