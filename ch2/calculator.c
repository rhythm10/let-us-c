# include <stdio.h>
int main (int argc, char const *argv[])

{
	int n1,n2,s,m,d,mo,a;

	printf("Enter first no. = \n");
	scanf("%d",&n1);

	printf("Enter second no. = \n");
	scanf("%d",&n2);
	
	 s = n1 - n2;
   	 a = n1 + n2;
	 d = n1 / n2;
	 m = n1 * n2;
	mo = n1 % n2;


	printf("\t\nresult : \nsub = %d\nadd = %d\ndivide = %d\nmultiply = %d\nmode = %d\n",s,a,d,m,mo);
}
