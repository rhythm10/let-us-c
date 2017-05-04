# include <stdio.h>
int main (int argc, char const *argv[])
{
	int x,y,i=1;
	long int power = 1;

	printf("enter two no.");
	scanf("%d%d",&x,&y);

	while(i<=y)
	{
		power = power * x;
		i++;
	}
	printf("%d to the power %dis%ld",x,y,power);

}