# include <stdio.h>
int main (int argc, char const *argv[])

{
	int co, s, pq ,G ,B;

	s = 20;

	printf("Enter the order units = ");
	scanf("%d",&co);

	printf("product quantity is Good or Bad(G/B) = ");
	scanf("%d",&pq);

	if(pq==G && co <= s)
		printf("order will be suplied");

	else if(pq == B)
		printf("Do not  supply");

	else(pq == G && co > s);
		printf("we have less quantity but the order will be supplied and left quantity will soon be dispatched");

}