# include <stdio.h>
int main(int argc, char const *argv[])

{
	int x1,y1,x2,y2,x3,y3,s1,s2;

	printf("\nEnter the values of x1 and y1 coordinates of first point:");
	scanf("%d%d",&x1,&y1);

	printf("\nEnter the values of x2 and y2 coordinates of first point:");
	scanf("%d %d",&x2,&y2);

	printf("\nEnter the values of x3 and y3 coordinates of first point:");
	scanf("%d%d",&x3,&y3);

	s1 = (x2- x1)/(y2 - y1);

	s2 = (x3- x2)/(y3 - y2);

	if(s1 == s2)
		printf("Points are Collier\n");
	else
		printf("Points are Not Collier\n");

}