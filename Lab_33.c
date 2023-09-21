#include <stdio.h>

void inputArr(int select);
void plusArray(float first[10], float second[10]);
void printResult(float sumArr[10]);
float first1D[10], second1D[10], third1D[10];
int i, size = 10;
main()
{
    int run = 0;
    char finish = 'y';
    while (finish == 'y')
    {
        run = 0;
        printf("Enter number in first array (10 number)");
        inputArr(1);
        printf("Enter number in second array (10 number)");
        inputArr(2);
        plusArray(first1D, second1D);
        printResult(third1D);
        while (run == 0)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 1;
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

void inputArr(int select)
{

    if (select == 1)
    {
        for (i = 0; i < size; i++)
        {
            first1D[i] = 0;
        }
        for (i = 0; i < size; i++)
        {
            printf("\nFirst[%d] : ", i);
            scanf("%f", &first1D[i]);
        }
    }
    else if (select == 2)
    {
        for (i = 0; i < size; i++)
        {
            second1D[i] = 0;
        }
        for (i = 0; i < size; i++)
        {
            printf("\nSecond[%d] : ", i);
            scanf("%f", &second1D[i]);
        }
    }
}

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