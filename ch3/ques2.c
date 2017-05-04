# include <stdio.h>
int main (int argc, char const *argv[])
{
	int num,fact, i = 1;
	printf("enter any number");
	scanf("%d",&num);

	while(i <= num)
	{
		fact = fact * i;
		i++;
	}
	printf("factorial of %d=%d",num,fact);
}