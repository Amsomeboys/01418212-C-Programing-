#include <stdio.h>
// score = 5
main()
{

	int num1, num2, sum;
	int tmp = 1;
	char con = 'y';

	while (con == 'y')
	{
		printf("Enter first number:");
		scanf("%d", &num1);

		if (con == 'y')
		{
			printf("Enter second number :");
			scanf("%d", &num2);
			sum = num1 + num2;

			if (sum > 52)
			{
				printf("\n\"Summary Result is more than 52\"\n\n");
				tmp++;
			}
			else if (sum == 52)
			{
				printf("\n\"Summary Result is equal 52\"\n\n");
				tmp++;
			}
			else if (sum < 52)
			{
				printf("\n\"Summary Result is not more than 52\" \n\n");
				tmp++;
			}
		}

		while (tmp == 2)
		{
			printf("Continue Program ? (y/N): ");
			scanf(" %c", &con);
			if (con == 'y' || con == 'N')
			{
				tmp = 1;
			}
			else
			{
				printf("\"Enter 'y' or 'N' only\"");
				tmp = 2;
			}
		}
		if (con == 'N')
		{
			printf("\n\"End Program\"\n\n");
			break;
		}
		printf("\n");
	}
}