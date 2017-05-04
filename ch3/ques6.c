# include <stdio.h>
int main (int argc, char const *argv[])
{
	int m= 21,p,c;

	while(1)
	{
		printf("no of matches left = %d",m);
		printf("pick up 1,2,3 or 4 matches");
		scanf("%d",&p);
		if(p>4||p<1)
			continue;

		m = m-p;
		printf("no of matchestick left = %d",m);

		c = 5-p;
		printf("out of which computer picked up %d",c);

		m = m - c;
		if(m == 1)
		{
			printf("no . of matchestick left %d",m);
			printf("you lost");
			break;
		}
	}

}