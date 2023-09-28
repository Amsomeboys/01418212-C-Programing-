#include <stdio.h>
main() 
{
    float arr[20]; 
    float *index,avg;
    int i,run=0;
    char finish ='y';
while (finish == 'y')
{
    for(i=0;i<20;i++)
    {
        arr[i]=0;
    }
    printf("Enter number in Array\n");
    for(i=0;i<20;i++)
    {
        printf("Arr[%d] : ",i);
        scanf("%f",&arr[i]);
    }
    for(i=0;i<20;i++)
    {
        index = &arr[i];
        avg += *index;
    }
        avg = avg/20;
        printf("\n avg : %.2f",avg);
        run=1;

        while (run == 0)
        {
            printf("\n\ncontinue Program? : ");
            scanf(" %c",&finish);
            if(finish == 'y' || finish == 'N')
            {
                run =0;
                index=0;
                avg=0;
            }
        }
        
}
}