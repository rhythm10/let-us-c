#include <stdio.h>
int main(int argc, char const *argv[])


{
	int amount;

	printf("Enter amount to be withdrawn(in hundreds) = ");
	scanf("%d",&amount);

	printf("Required notes of rs 100 = %d\n", amount/100);
	printf("Required notes of rs 50 = %d\n",(amount % 100)/50);
	printf("Required notes of rs 10 = %d\n",(((amount % 100)%50)/100));
	printf("Amount still remaining rs = %d\n",(((amount%100)%50)%10));




}