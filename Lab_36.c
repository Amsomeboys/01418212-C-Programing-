#include <stdio.h>
main() 
{
    float arr[20]; 
    float *index,avg;
    int i;

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
}