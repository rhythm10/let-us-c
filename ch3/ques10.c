# include <stdio.h>
int main (int argc, char const *argv[])
{
    int num=1,i;

    for(;num<=300;num++)
    {
        for(i=2;i<300;i++)
        {
            if(i==num)
                continue;
            if(num%i==0)
                break;
            if((num%i!=0) && i==299)
                printf(" %d ",num);
        }
    }
    
}