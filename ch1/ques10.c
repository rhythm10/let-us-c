# include <stdio.h>
int main(int argc,char const *argv[]) 
 
{

	int pop, popmen,poplit, popwomen, popilit, litmen, ilitmen, ilitwomen, litwomen;

	pop = 80000;

	popmen = (52 * pop) / 100;
	popwomen = pop - popmen;
	poplit = (48 * pop) / 100;
	litmen = (35 * pop)/100;
	litwomen = poplit - litmen;
	ilitmen = popmen - litmen;
	ilitwomen = popwomen - litwomen;

	printf("Total popuation of city = %d\n",pop);
	printf("Total population of men = %d\n",popmen);
	printf("Total population of women = %d\n",popwomen);
	printf("Literate population of men = %d\n",litmen);
	printf("Literate population of women = %d\n",litwomen);
	printf("Illiterate population of men = %d\n", ilitmen);
	printf("Illiterate population of women = %d\n",ilitwomen);


























 }
