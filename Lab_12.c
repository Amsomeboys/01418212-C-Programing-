#include <stdio.h>

main(){

	int num1=0,num2,sum,end=1;
	int tmp = 1 ;

	while(tmp == 1 && end == 1 )
	{

		printf("Enter first number (Enter -1 to stop program):");
		scanf("%d",&num1);
		while(num1 == -1 && end == 1)
		{
			printf("\n\"End Program\"\n\n");
			end=0;
		}
		while(end != 0 && tmp == 1)
		{
			printf("Enter second number :");
			scanf("%d",&num2);
			sum = num1 + num2;
			while(tmp<=1&&sum>=52)
			{
				printf("\n\"Summary Result is more than 52\"\n\n");
				tmp++;

			}
			while(tmp<=1&&sum<52)
			{
				printf("\n\"Summary Result is not more than 52\" \n\n");
				tmp++;

			}
		}
		tmp = 1;

	}
}