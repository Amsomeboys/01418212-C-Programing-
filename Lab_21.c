#include <stdio.h>

main(){

	int postCode=1;
	int match =0;
	int run=1;

while(run == 1)
    {
	printf("Enter Postcode OR Enter 0 to stop program: ");
	scanf("%d",&postCode);
    if(postCode == 0)
    {
        printf("End Program\n\n");
		run = 0;
    }

		if(postCode == 10120)
		{
			printf("\n\"Donmaung, Bangkok\" \n\n");
		}

		else if(postCode == 50180 )
		{
			printf("\n\"Mae Rim, Chiang Mai\" \n\n");
		}

		else if(postCode == 12110 )
		{
			printf("\n\"Thanyaburi, Pathum Thani\" \n\n");
		}

		else if(postCode == 65000  )
		{
			printf("\n\"Maung Phitsanulok, Phitsanulok\" \n\n");
		}
        else if(postCode == 58110  )
		{
			printf("\n\"Sop Moei, Mae Hong Son\" \n\n");
		}

		else
		{
			printf("\n\"No Have Infomation For This Post Code\" \n \" Please enter again \"\n\n");

         }

}
}