# include <stdio.h>
int main(int argc, char const *argv[])

{
	int x, y, r, d ,dis;

	printf("Enter the Radius of Circle & coordinates of point(x,y) = ");
	scanf("%d%d%d",&r,&x,&y);

	dis = x * x + y * y;
	d = r * r;

	if(dis == d)
		printf("Point is on the Circle");
	else  {
		if(dis>d)
			printf("point is outside the circle\n");
		else
			printf("point is inside the circle\n");
		  }

}
