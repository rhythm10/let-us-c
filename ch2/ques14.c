# include <stdio.h>
int main(int argc, char const *argv[])

{
   int x,y;
   
   printf("Enter the points x and y\n");
   scanf("%d%d\n",&x,&y);
   
   if(x==0 && y==0)
   {
   printf("points lies on origin\n");
   }
   else if(x==0)
   {
   printf("points lies on x-axis\n");
   }
   else (y==0);
   {
   printf("points lies on y-axis\n");
   }

}