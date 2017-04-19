# include <stdio.h>
int main(int argc, char const *argv[])

{
	char n;

	printf("\n\nEnter a letter from the keyboard = \n");
	scanf("%c",&n);

	n>=97 && n<=122 ? printf("character entered in lower case\t") : printf("\ncharacter is not in lower case\t");




}