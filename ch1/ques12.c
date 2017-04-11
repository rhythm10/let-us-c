# include <stdio.h>
int main(int argc, char const *argv[])

{
		int items;
		float sp, cp, profit;

	printf("Enter total selling price = ");
	scanf("%f",&sp);

	printf("Enter profit = ");
    scanf("%f",&profit);

	cp = sp - profit;

	printf("Total no. of items = ");
	scanf("%d",&items);

	cp = cp / items;


	 printf("Cost of per item id Rs = %f\n\n",cp);

	}