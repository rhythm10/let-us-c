# include <stdio.h>

int main(int argc,char const *argv[])

{	

	int c, d, temp;

	printf("Enter the number at location C = ");
	scanf("%d", &c);

	printf("Enter the number at location D = ");
	scanf("%d", &d);

	temp = c;
	c = d;
	d = temp;

	printf("Number  C after swap operation = %d\n", c);
	printf("Number  D after swap operation = %d\n", d);

}