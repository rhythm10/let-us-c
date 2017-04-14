# include <stdio.h>
int main(int argc, char const *argv[])

{

	int a,b,c,sum;

	printf("Enter All Three Angles of Triangle :");
	scanf("%d%d%d",&a,&b,&c);

	sum = a + b + c;

	if(sum == 180)  {
		printf("Triangle Exist");
	}
	else { 
		printf("Triangle Does not exist");
	}

}

