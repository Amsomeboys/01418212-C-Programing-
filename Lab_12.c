#include <stdio.h>

main()
{

	int num1 = 0, num2, sum;
	int tmp = 1;
	char con = 'y';

	while (con == 'y')
	{
		printf("Enter first number:");
		scanf("%d", &num1);

		while (con == 'y' && tmp == 1)
		{
			printf("Enter second number :");
			scanf("%d", &num2);
			sum = num1 + num2;

			while (tmp == 1 && sum >= 52)
			{
				printf("\n\"Summary Result is more than 52\"\n\n");
				tmp++;
			}
			while (tmp == 1 && sum < 52)
			{
				printf("\n\"Summary Result is not more than 52\" \n\n");
				tmp++;
			}
		}

		while (tmp == 2)
		{
			printf("Continue Program ? (y/N):");
			scanf(" %c", &con);
			tmp = 1;
		}
		while (con == 'N')
		{
			printf("\n\"End Program\"\n\n");
			break;
		}
		printf("\n");
	}
}