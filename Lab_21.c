#include <stdio.h>
main()
{

	int postCode = 1;
	char con = 'y';

	while (con == 'y')
	{
		printf("Enter Postcode : ");
		scanf("%d", &postCode);

		if (postCode == 10120)
		{
			printf("\n\"Donmaung, Bangkok\" \n\n");
		}

		else if (postCode == 50180)
		{
			printf("\n\"Mae Rim, Chiang Mai\" \n\n");
		}

		else if (postCode == 12110)
		{
			printf("\n\"Thanyaburi, Pathum Thani\" \n\n");
		}

		else if (postCode == 65000)
		{
			printf("\n\"Maung Phitsanulok, Phitsanulok\" \n\n");
		}
		else if (postCode == 58110)
		{
			printf("\n\"Sop Moei, Mae Hong Son\" \n\n");
		}

		else
		{
			printf("\n\"No Have Infomation For This Post Code\" \n \" Please enter again \"\n\n");
		}
		while (postCode > 0)
		{
			printf("Continue Program ? (y/N): ");
			scanf(" %c", &con);
			printf("\n");
			if (con == 'y' || con == 'N')
			{
				postCode = 0;
			}
			else
			{
				printf("Enter 'y' or 'N' only\n");
				postCode = 1;
			}
		}

		if (con == 'N')
		{
			printf("\n\"End Program\"\n\n");
			break;
		}
	}
}