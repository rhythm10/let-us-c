# include <stdio.h>
int main(int argc, char const *argv[])

{
	char sp;

	printf("Enter any character = ");
	scanf("%c",&sp);

	sp>=0&&sp<=47||sp>=58&&sp<=64||sp>=91&&sp<=96||sp>=123 ? printf("character entered is special symbol") : printf("character entered is not special symbol");
	
}