#include <stdio.h>

int main()
{
    char first,second,third,fourth,fifth,blank;
    int work = 0 ;
   

    while(work == 0)
    {
        printf("Enter First Word OR Enter \"/\" to stop program): ");
        scanf(" %c",&first);
        work =1;

        while(first == '/'&& work ==1)
        {
            printf("End Program");
            break;
        }

        while(first != '/' && work ==1)
        {

        printf("Enter Second Word : ");
        scanf(" %c",&second);

        printf("Enter Third Word : ");
        scanf(" %c",&third);

        printf("Enter Fourth Word : ");
        scanf(" %c",&fourth);

        printf("Enter Fifth Word : ");
        scanf(" %c",&fifth);

        

        while(first > second || second > third || third > fourth || fourth > fifth)
        {
            while(first > second)
            {
                blank = second;
                second =first;
                first = blank;
            }
            while(second > third)
            {
                blank = second;
                second = third;
                third = blank;
            }
             while(third > fourth)
            {
                blank = third;
                third = fourth;
                fourth =blank;
            }
            while(fourth > fifth)
            {
                blank = fourth;
                fourth = fifth;
                fifth =blank;
            }
        }
       

              printf("%c %c %c %c %c",first,second,third,fourth,fifth);
              printf("\n\n");
              work = 0;
        }
    }
}