# include <stdio.h>
int main(int argc, char const *argv[])


{		

	int n, a, b ,sum;

	printf("Enter 4 Digit no. = ");
	scanf("%d", &n);

	int n_copy = n;


	a = n % 10;
	n = n / 1000;

	b = n % 10;
	sum = a + b;

	printf("Sum of first and last digits of no(%d) is %d \n", n_copy, sum);


}