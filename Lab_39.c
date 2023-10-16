#include <stdio.h>

int i = 0;
float *temp, *temp2;

void swapAddresses(float *arr[5], float *arr2[5], int size)
{
    for (i = 0; i < size; i++)
    {
        temp = arr[i];
        arr[i] = arr2[i];
        arr2[i] = temp;
    }
}

main()
{
    float arr[5], arr2[5];
    int size = 0;
    printf("Size : ");
    scanf("%d", &size);
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Arr[%d] : ", i);
        scanf("%f", &arr[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("Arr2[%d] : ", i);
        scanf("%f", &arr2[i]);
    }
    printf("\n\n");
    for (i = 0; i < size; i++)
    {
        temp = &arr[i];
        printf("Arr[%d] : %.2f (Address : %u) \n", i, arr[i], temp);
    }
    temp = 0;
    printf("\n");
    for (i = 0; i < size; i++)
    {
        temp = &arr2[i];
        printf("Arr2[%d] : %.2f (Address : %u) \n", i, arr2[i], temp);
    }
    temp = 0;
    printf("\n\n");

    swapAddresses(arr, arr2, size);

    printf("SwapAddress \n\n");

    for (i = 0; i < size; i++)
    {
        temp = &arr[i];
        printf("Arr[%d] : %.2f (Address : %u) \n", i, arr[i], temp);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        temp = &arr2[i];
        printf("Arr2[%d] : %.2f (Address : %u) \n", i, arr2[i], temp);
    }
    printf("\n");
}