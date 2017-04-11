# include <stdio.h>

int main(int argc,char const *argv[])
{
	
	int cp, sp, p ,l ;

	profitf("Enter selling price = ");
	scanf("%d",&sp);

	profitf("Enter cost price = ");
	scanf("%d",&cp);

	p = sp - cp;
	l = cp - sp;

	if(p>0)
		printf("the seller has made a profit of Rs %d",p);

    if(l>0)
        printf("the seller is in loss by Rs %d",l);

    if(p==0)
    	printf("there is no loss, no profit");

    printf("\nPress any key to exit\n");

}
