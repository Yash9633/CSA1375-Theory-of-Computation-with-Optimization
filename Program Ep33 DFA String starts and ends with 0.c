#include<stdio.h>
#include<conio.h>
//DFA(Deterministic Finite Automata) OF STRING THAT STARTS WITH '0' AND END WITH '0'
int main(){
	char Initial,Final;
	int temp,num,rem;
	printf("Enter the string: ");
	scanf("%d",&num);
	temp = num;
	printf("String: ");
	while(num!=0){
		rem = num%10;
		printf("%d ",rem);
		if(num==temp){
			Final = rem;
		}
		if(num/10 == 0){
			Initial = rem;
		}
		num = num/10;
	}
	printf("\n\nInitial String: %d",Initial);
	printf("\nFinal String: %d",Final);
	if(Initial==Final){
		printf("\n\nSince both the inputs are same,THE GIVEN STRING IS ACCEPTED!");
	}
	else{
		printf("\n\nSince both the inputs are not same,THE GIVEN STRING IS NOT VALID FOR THIS AUTOMATA..");
	}
}
