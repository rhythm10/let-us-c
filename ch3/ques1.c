# include <stdio.h>
int main (int argc, char const *argv[])

{
	int i, hour;
float otpay;

for(i=1;i <= 10; i++)
{
	printf("no. of hours worked = \n");
	scanf("%d",&hour);

	if(hour > 40)
	{
		otpay = (hour - 40)*12;
		printf("no. of hours worked = %d\n Overtime pay = rs%f",hour,otpay);

	}
	else
	{
		otpay = 0;
		printf("no overtime");
	}
}
}