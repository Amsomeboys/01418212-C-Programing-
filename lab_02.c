#include <stdio.h>

int main(){

    int start = 1;
    int end;
    int count;
    int error;
    int i = 1;


    while(start == 1)
    {
        error =0;

    printf("Please Input Start Number OR Enter 0 to stop program): ");
    scanf("%d",&start);

    while( start == 0 || start < 0)
    {
        printf("End Program");
        break;
    }

    while(start > 1)
    {
    printf("\nPlease Input End Number : ");
    scanf("%d",&end);

    while(start > end)
    {
        printf("Please enter start number more than end number");
        start = 1;
        end = 1;
        error =1;

    }

    while(start > 0 && end > 0 && error != 1)
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
}
}
}





