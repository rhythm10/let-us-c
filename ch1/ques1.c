# include <stdio.h>

int main(int argc,char const *argv[])
{

int dr,hr;
float gr,bp;

printf("Enter Basic Pay of Ramesh:");
scanf("%f",&bp);

dr = 0.4 * bp;
hr = 0.2 * bp;

//Formula for Calculation of Gross
gr = bp + dr + hr; 

printf("Basic Pay of Ramesh=%f\n",bp);
printf("Dearness Allowance=%d\n",dr);
printf("House Rent Allowance=%d\n",hr);
printf("Gross Pay of Ramesh is %f\n",gr);

printf("\n\n\nPress any key to exit..\nw");

}
