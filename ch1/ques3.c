# include <stdio.h>

int main(int argc,char const *argv[])

{

     int m, p, c, e, h ;
     float per;

     printf("Marks Obtained in Maths = ");
     scanf("%d", &m);

     printf("Marks Obtained in Physics = ");
     scanf("%d", &p);

     printf("Marks obtained in Chemistry = ");
     scanf("%d", &c);

     printf("Marks obtained in English = ");
     scanf("%d", &e);

     printf("Marks Obtained in Hindi = ");
     scanf("%d", &h);

     //Total Percentage = m+p+c+e+h / 500 * 100

     per = ((float)(m + p + c + e + h) / 500) * 100;

     printf("Total Percentage = %f", per);
   
   
     printf("\n\n\n\nPress any key to exit..\n");

 }