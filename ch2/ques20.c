# include <stdio.h>
int main(int argc, char const *argv[])
									
{ 
	float time;
	
	printf("\nEnter the time taken by the worker in hours (hh.mm) = \n");
    scanf("%f",&time);

    if(time>=2.00 && time<=3.00)
    	printf("\nThis worker is highly efficient");
    else if(time>3.00 && time<=4.00)
    	printf("\nThis worker is ordered to improve speed");
    else if(time>4.00 && time<=5.00)
    	printf("\nThis worker is given training to improve his speed\n");
    else
    	printf("\nThis worker has to leave the company\n");

    printf("\n\nPress any key to exit");
}
     
	 