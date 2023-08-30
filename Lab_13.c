#include <stdio.h>

main(){

    int start,end,count;
    int i;
    int run = 0;



    while(run == 0)
    {
    printf("Please Input Start Number OR Enter 0 to stop program): ");
    scanf("%d",&start);
    run++;

    while( start == 0 )
    {
        printf("\n\"End Program\" \n\n");
        break;
    }

    while(start >= 1 && run == 1)
    {
    printf("\nPlease Input End Number : ");
    scanf("%d",&end);

    while(start > end)
    {
        printf("\n\"Please enter start number more than end number\"");
        start = 1;
        end = 1;
		run = 0;
    }

    while(start > 0 && end > 0 && run == 1)
    {
        printf("\nPrime numbers in this range is :");

       while (start <= end)  // check start < end ?
       {
            i = 1;        // reset to default value every round
            count = 0;


         while (i <= start && count < 3) // check i < start number ? and mod == 0 count < 3
         {
            while (start % i == 0 && count < 3) //check mod == 0 and count < 3
            {
                count++;  //count +1
                i++; // i+1
            }
            i++; // i+1
        }
            while (count == 2) //count == 2
            {
                printf("%d  ", start); // print
                count = 0; // reset to out loop
            }

            start++; // start +1

        }
            end = 0;
        }
       printf("\n\n");
        start = 1;
        run = 0;
}
}
}