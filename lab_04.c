#include <stdio.h>

main(){

	int postCode;
	int match =0;

while(match == 0)
    {	
	printf("Enter Postcode OR Enter 0 to stop program: ");
	scanf("%d",&postCode);

    while(postCode == 0)
    {
        printf("End Program"); 
        break;
    }
	
		while(postCode == 10120)
		{
			printf("\nDonmaung, Bangkok \n\n");
            match = 1;
            postCode = 0;
		}
	
		while(postCode == 50180 )
		{
			printf("\nMae Rim, Chiang Mai \n\n");
			match = 1;
            postCode = 0;
		}
		
		
		while(postCode == 12110 )
		{
			printf("\nThanyaburi, Pathum Thani \n\n");
			match = 1;
            postCode = 0;
		}
		
	
		while(postCode == 65000  )
		{
			printf("\nMaung Phitsanulok, Phitsanulok \n\n");
			match = 1;
            postCode = '0';
		}
        while(postCode == 58110  )
		{
			printf("\nSop Moei, Mae Hong Son \n\n");
			match = 1;
            postCode = '0';
		}
		
		while(match == 0 && postCode != 0)
			{
				printf("\nNo Have Infomation For This Post Code \n \" Please enter again \"\n\n");
                postCode = 0;

            }
            match = 0;
		
}

}