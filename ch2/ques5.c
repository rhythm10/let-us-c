										# include <stdio.h>
										int main(int argc, char const *argv[])

										{
											int n, a, b, c, d, e, l, re, abcde ;

											printf("Enter any Five Digit Number = ");
											scanf("%d",&n);

											n = abcde;

											a = n % 10;
											n = n/10;

											b = n % 10;
											n = n/10;

											c = n % 10;
											n = n/10;

											d = n % 10;
											n = n/10;

											e = n % 10;

											printf("%d%d%d%d%d\n",a ,b ,c ,d ,e);

											re = abcde;

											if(n == re) {
												printf("no. reversible is equal to itself");
											}
											else{
												printf("not equal");
											}


										}