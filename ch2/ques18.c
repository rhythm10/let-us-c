# include <stdio.h>
int main(int argc, char const *argv[])
									
{
	int a, b, c;

	printf("\n\nEnter all three sides of Triangle = \n");
	scanf("%d%d%d",&a,&b,&c);

    if((a+b) > c )
    {
        if((b+c) > a)
        {
            if((a+c) > b) 
            {
                printf("\nTriangle is valid.\n");
            }
            else
            {
                printf("Triangle is not valid.");
            }
        }
        else
        {
            printf("Triangle is not valid.");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }
 
}