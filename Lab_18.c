#include <stdio.h>

main(){

	int num1=0,num2,sum,end=1;

	while(end == 1)
	{

	printf("Enter first number (Enter -1 to stop program):");
	scanf("%d",&num1);
	if(num1 == -1 )
	{
		printf("\n\"End Program\"\n\n");
		end=0;
	}
	if(end != 0)
	{
	printf("Enter second number :");
	scanf("%d",&num2);
	sum = num1 + num2;
		if(sum>=52){
			printf("\n\"Summary Result is more than 52\"\n\n");
		}
		else{
			printf("\n\"Summary Result is not more than 52\" \n\n");
		}
	}

	}
}