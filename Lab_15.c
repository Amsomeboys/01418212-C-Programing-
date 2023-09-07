#include <stdio.h>

main()
{

	int postCode = 1;
	int match = 0;
	int run = 1;
	char con = 'y';

	while (match == 0 && run == 1 && con == 'y')
	{
		printf("Enter Postcode : ");
		scanf("%d", &postCode);

		while (postCode == 10120)
		{
			printf("\n\"Donmaung, Bangkok\" \n\n");
			match++;
			postCode = 1;
			run = 1;
		}

		while (postCode == 50180)
		{
			printf("\n\"Mae Rim, Chiang Mai\" \n\n");
			match++;
			postCode = 1;
			run = 1;
		}

		while (postCode == 12110)
		{
			printf("\n\"Thanyaburi, Pathum Thani\" \n\n");
			match++;
			postCode = 1;
			run = 1;
		}

		while (postCode == 65000)
		{
			printf("\n\"Maung Phitsanulok, Phitsanulok\" \n\n");
			match++;
			postCode = 1;
			run = 1;
		}
		while (postCode == 58110)
		{
			printf("\n\"Sop Moei, Mae Hong Son\" \n\n");
			match++;
			postCode = 1;
			run = 1;
		}

		while (match == 0 && postCode != 0 && run == 1)
		{
			printf("\n\"No Have Infomation For This Post Code\" \n \" Please enter again \"\n\n");
			postCode = 0;
			run = 1;
		}
		while (run == 1)
		{
			printf("Continue Program ?(y/N)");
			scanf(" %c", &con);
			run = 0;
		}
		while (con == 'N')
		{
			printf("\"End Program\"");
			break;
		}
		match = 0;
		run = 1;
	}
}