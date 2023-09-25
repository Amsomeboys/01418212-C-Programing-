#include <stdio.h>
void inputArr();
void plusArray(float first[10], float second[10]);
void printResult(float sumArr[10]);
float first1D[10], second1D[10], third1D[10];
int i, size = 10, count = 0;
main()
{
    int run = 0;
    char finish = 'y';
    for (i = 0; i < size; i++)
    {
        first1D[i] = 0;
        second1D[i] = 0;
        third1D[i] = 0;
    }
    while (finish == 'y')
    {
        run = 0;
        printf("Enter number in first array (10 number)\n");
        inputArr();
        printf("Enter number in second array (10 number)\n");
        inputArr();
        plusArray(first1D, second1D);
        printResult(third1D);
        while (run == 0)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 1;
                count = 0;
            }
            else
            {
                printf("Enter only \" y \" or \"N\"");
            }
        }
        if (finish == 'N')
        {
            printf("\"End Program\"");
        }
    }
}
void inputArr()
{
    for (i = 0; i < size; i++)
    {
        if (count == 0)
        {
            printf("FirstArr[%d] : ", i);
            scanf("%f", &first1D[i]);
        }
        else
        {
            printf("SecondArr[%d] : ", i);
            scanf("%f", &second1D[i]);
        }
    }
    count++;
};
void plusArray(float firstArr[10], float secondArr[10])
{
    for (i = 0; i < size; i++)
    {
        third1D[i] = firstArr[i] + secondArr[i];
    }
}
void printResult(float sumArr[10])
{
    printf("\nSum Array Result is : ");
    for (i = 0; i < size; i++)
    {
        printf("\nThird[%d] : %.2f ", i, sumArr[i]);
    }
}