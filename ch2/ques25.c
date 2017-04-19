# include <stdio.h>
int main (int argc, char const *argv[])

{
	int a, b, c;

	printf("Enter three numbers = ");
	scanf("%d%d%d",&a,&b,&c);

	(a>b&&a>c)?printf("a is greatest"):((b>a&&b>c)?printf("b is greatest"):printf("c is greatest"));


}