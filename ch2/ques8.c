# include <stdio.h>
int main(int argc, char const *argv[])

{
	int age, r, s, a;

	printf("Enter age of Ram,Shyam and Ajay = ");
	scanf("%d%d%d",&r,&s,&a);

	if(r<s&&r<a)
		printf("Ram is Youngest in all\n");

	if(s<r&&s<a)
		printf("Shyam is Youngest in all\n");

	if(a<r&&a<s)
		printf("Ajay is Youngest in all\n");

	printf("Enter any key to exit\n");


}