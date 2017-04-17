									# include <stdio.h>
									int main(int argc, char const *argv[])

									{
										int age,pr,policy;
										char gender,health,resident,M,P,F,E,V,C;

										printf("\nEnter the value of gender(M/F) = \n");
										scanf("%c",&gender);

										printf("\nEnter the values of health(E/P) = \n");
										scanf("%c",&health);

										printf("\nEnter your resident (V/C) = \n");
										scanf("%c",&resident);
										
										printf("\nEnter age = \n");
										scanf("%d",&age);

										if((gender== M) && (health == E) && (resident == C) && (age>=25&&age<=35))
										{

											printf("The person is insured)");
											printf("Premium = Rs4 per thousand");
											printf("Max insurance amount = rs2 lakh");
										}
										else
										if((gender==F)&&(health=E) && (resident==C)&&age>=25&&age<=35)
										{
											printf("person is insured");
											printf("premium = rs3 per thousand");
											printf("max insurance amount = rs 1 lakh");

										}
										else
										if((gender==M)&&(health==P)&&(resident==V&&age>=25&&age<=35))
										{	printf("the person is insured");
											printf("premium=rs6 per thousand");
											printf("max insurance amount = rs1000");
										}
										else
										printf("You cannot be insured");
										
										printf("\n\nPress any key to close \n");
	


									}


