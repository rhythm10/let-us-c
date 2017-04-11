# include <stdio.h>

int main(int argc,char const *argv[])
{
	int p,n;
	float r,si;
	int basic-hra;

	printf("Enter Values of p : ");
	scanf("%d", &p);
	printf("Enter Values of n : ");
	scanf("%d", &n);
	printf("Enter Values of r : ");
	scanf("%f", &r);

	/*fromula for simple interest*/
	si = (p * n * r) / 100;
	
	printf("Simple Interest for amount(%d) in no of years(%d) at rate of interest(%f) is : %f\n", p, n, r, si);
}