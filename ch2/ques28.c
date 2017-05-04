# include <stdio.h>
int main (int argc, char const *argv[])

{
	float sal;

	printf("Enter the Salary");
	scanf("%f",&sal);

	sal = (sal<40000 && sal>25000) ? printf("Manager") : (sal<25000 && sal>15000) ? printf("Accountant") : printf("Clerk");

	 
}