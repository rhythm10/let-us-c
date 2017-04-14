# include <stdio.h>
int main(int argc, char const *argv[])

{
	char ch;

	printf("\nEnter a character from tyhe keyboard\n");
	scanf("%c",&ch);

	if(ch>=65&&ch<=90)
		printf("\nThe Character is a uppercase latter\n");

	if(ch>=97&&ch<+122)
		printf("\nCharacter is lower case\n");

	if(ch>=48&&ch<=57)
		printf("character is a number\n");

	if(ch>=0&&ch<=47 || ch>=58&&ch<=64 || ch>=91&&ch<=96 || ch>=123&&ch<=127)
	    printf("character is a special symbol\n");

}
