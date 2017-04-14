# include <stdio.h>
int main(int argc, char const *argv[])

{
	int no;

	printf("Enter any Number = ");
	scanf("%d",&no);

	if(no < 0)
    no = no * -1;
		printf("\nThe absolute value of given number is %d\n", no);



}