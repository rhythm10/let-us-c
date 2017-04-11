#include <stdio.h> 

int main(int argc, char const *argv[])
{
	
	int n,a,b,c,d,e,r,r1,r2,r3,r4,r5;

	printf("Enter 5 Digit Number = ");
	scanf("%d", &n);

	a = n % 10;
	n = n/10;

	b = n % 10;
	n = n/10;

	c = n % 10;
	n = n/10;

	d = n % 10;
	n = n/10;

	e = n % 10;

	r = 0;

	r = r * 10 + a;

	r = r * 10 + b;

	r = r * 10 + c;

	r = r * 10 + d;

	r = r * 10 + e;

	printf("Your Reverse No. = %d\n", r);
}