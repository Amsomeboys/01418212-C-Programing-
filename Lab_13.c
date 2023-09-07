#include <stdio.h>

main()
{//1
    int start=0,end,count;
    int i;
    char run = 'y';

    while(run == 'y' && start <= 0)
    {//2
    	printf("Please Input Start Number: ");
    	scanf("%d",&start);
    	while(start <=  0)
    	{//3
			printf("\n\"Enter more than 0\"");
			break;
		}//3
    	while( run == 'N' )
    	{//4
        	printf("\n\"End Program\" \n\n");
        	break;
    	}//4
    	while(start > 0 && run == 'y')
    	{//5
    		printf("\nPlease Input End Number : ");
    		scanf("%d",&end);
    		while(start > end)
    		{//6
        		printf("\n\"Please enter start number more than end number\"");
        		start = 1;
        		end = 1;
    		}//6
    		while(start > 0 && end > 0 )
    		{//7
        		printf("\nPrime numbers in this range is :");
       			while (start <= end)  // check start < end ?
       			{//8
            		i = 1;        // reset to default value every round
            		count = 0;
         			while (i <= start && count < 3) // check i < start number ? and mod == 0 count < 3
         			{//9
            			while (start % i == 0 && count < 3) //check mod == 0 and count < 3
            			{//10
                			count++;  //count +1
                			i++; // i+1
            			}//10
            			i++; // i+1
        			}//9
            		while (count == 2) //count == 2
            		{//11
                		printf("%d  ", start); // print
                		count = 0; // reset to out loop
            		}//11
            		start++; // start +1
        		}//8
            	end = 0;
        	}
		}
	}//2
}//1