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
			if (sum == 52)
			{
				printf("\n\"Summary Result is equal 52\"\n\n");
				tmp++;
			}
			else
			{
				printf("\n\"Summary Result is not more than 52\" \n\n");
				tmp++;
			}
		}

		if (tmp == 2)
		{
			printf("Continue Program ? (y/N): ");
			scanf(" %c", &con);
		}
		if (con == 'N')
		{
			printf("\n\"End Program\"\n\n");
			break;
		}
		printf("\n");
		tmp = 1;
	}
}