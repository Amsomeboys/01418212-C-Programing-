#include <stdio.h>

main(){

    int start,end,count;
    int i,j;
    int run = 0;



    while(run == 0)
    {
    printf("Please Input Start Number OR Enter 0 to stop program): ");
    scanf("%d",&start);
    run++;

    if( start == 0 )
    {
        printf("\n\"End Program\" \n\n");
		run = 1;
    }

    if(start >= 1 )
    {
    printf("\nPlease Input End Number : ");
    scanf("%d",&end);

    if(start > end)
    {
        printf("\n\"Please enter start number more than end number\"");

    }

    if(start > 0 && end > 0)
    {
        printf("\nPrime numbers in this range is :");


	  for (i = start; i <= end; i++) {
	        count = 0;

	        for (j = 1; j <= i; j++) {
	            if (i % j == 0) {
	                count++;
	            }
	        }

	        if (count == 2)
	        {
	            printf("%d ", i);
	        }
    }
    }

       printf("\n\n");
		run = 0;

}
}
}