#include <stdio.h>

main(){

	int num1=0,num2,sum;
	int tmp = 1 ;
	char con='y';

	while(tmp == 1 && con == 'y' )
	{
		while(con == 'N')
		{
			printf("\n\"End Program\"\n\n");
			con == 'y';
		}

		while(tmp == 1 )
		{
			printf("Enter first number:");
			scanf("%d",&num1);
			tmp++;
		}

		while(con != 'N' && tmp == 2)
		{
			printf("Enter second number :");
			scanf("%d",&num2);
			sum = num1 + num2;

			while(tmp<=2&&sum>=52)
			{
				printf("\n\"Summary Result is more than 52\"\n\n");
				tmp++;
			}
			while(tmp<=2&&sum<52)
			{
				printf("\n\"Summary Result is not more than 52\" \n\n");
				tmp++;

			}
		}

		while(tmp == 3)
		{
			printf("Continue Program ? (y/N):");
			scanf(" %c",&con);
			tmp++;
		}
		tmp=1;
		printf("\n\n");
	}
}