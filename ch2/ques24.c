# include <stdio.h>
int main(int argc, char const *argv[])

{
	int year;

	printf("Enter a Year = ");
	scanf("%d",&year);

	year % 100 == 0 ? (year % 400 ==0 ? printf("leap year"):printf("not a leap year")):(year%4 == 0? printf("leap year"):printf("not a leap year"));

	
}