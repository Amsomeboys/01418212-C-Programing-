#include <stdio.h>
main()
{
	int start = 0, end, count;
	int i;
	int p = 0;
	char run = 'y';

	while (run == 'y' && start <= 0)
	{
		printf("Please Input Start Number: ");
		scanf("%d", &start);
		while (start <= 0)
		{
			printf("\n\"Enter more than 0\"\n");
			break;
		}
		while (start > 0 && run == 'y')
		{
			printf("\nPlease Input End Number : ");
			scanf("%d", &end);
			while (start > end)
			{
				printf("\n\"Please enter start number more than end number\"");
				start = 1;
				end = 1;
			}
			while (start > 0 && end > 0)
			{
				printf("\nPrime numbers in this range is :");
				while (start <= end)
				{
					i = 1;
					count = 0;
					while (i <= start && count < 3)
					{
						while (start % i == 0 && count < 3)
						{
							count++;
							i++;
						}
						i++;
					}
					while (count == 2)
					{
						printf("%d  ", start);
						p++;
						count = 0;
					}
					while (p == 0)
					{
						printf("\"No Prime Number in this range\"");
						count = 0;
						p = 1;
					}
					start++;
				}
				end = 0;
			}
			start = 0;
		}
		while (end == 0)
		{
			printf("\n\"Continue ? (y/N) : \"");
			scanf(" %c", &run);
			end = 1;
			p = 0;
		}
		while (run == 'N')
		{
			printf("\n\"End Program\" \n\n");
			break;
		}
	}
}