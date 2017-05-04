# include <stdio.h>
int main (int argc, char const *argv[])

{
	int code;

	scanf("%d",&code);

	code > 1 ? printf("Jerusalem") : (code < 1) ? printf("Eddie") : printf("C Brain");

}
