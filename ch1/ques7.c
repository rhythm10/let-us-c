# include <stdio.h>

int main(int argc,char const *argv[]) 

{

	int n, a, b, c, d, e, sum;

	printf("Please Enter Five Digit Number = ");
	scanf("%d",&n);

	a = n % 10;
	n = n/10;

	b = n % 10;
	n = n/10;

	c = n % 10;
	n = n/10;

	d = n % 10;
	n = n/10;

	e = n % 10;
    

    sum = (a + b + c + d + e);

    printf("Sum Of No. of 5 Digit Number =%d",sum);


	printf("\n\nPress any key to exit..\n");


}
























































