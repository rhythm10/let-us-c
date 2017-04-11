# include <stdio.h>
int main(int argc, char const *argv[])

{
 
 	int n, a, b, c, d, e;

 	printf("Enter 5 Digit no. = ");
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

 	
 	a = (a + 1) % 10;
 	b = (b + 1) % 10;
 	c = (c + 1) % 10;
 	d = (d + 1) % 10;
 	e = (e + 1) % 10;


 	            			printf("Answer of Digit(By Adding one no.) = %d%d%d%d%d\n",e,d,c,b,a);

}