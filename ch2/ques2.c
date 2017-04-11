# include <stdio.h>
int main(int argc, char const *argv[])

{
	int  n;

	printf("Enter any No. = ");
	scanf("%d",&n);

	if(n % 2 == 0)
	  printf("the Number is even\n");
	else
	  printf("the Number is odd\n");

	printf("Please Press any key to exit\n");

}