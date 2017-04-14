										# include <stdio.h>
										int main(int argc, char const *argv[])

										{
											int n, a, b, c, d, e, l, n_copy, r;

											printf("Enter any Five Digit Number = ");
											scanf("%d",&n);

											n_copy = n;

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

											printf("your reverse no .is = %d\n",r);

											if(n_copy == r) {
												printf("no. reversible is equal to itself\n");
											}
											else{
												printf("not equal\n");
											}


										}