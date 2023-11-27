#include <stdio.h>

int inputArr(int arr[5], int size);
void printAddress(int arr[5], int size);
void swap(int arr[5], int arr2[5], int size);

main()
{
    int arr[5], arr2[5];
    int size = 0, i, run = 1;
    char finish = 'y';
    printf("size : ");
    scanf("%d", &size);

    while (finish == 'y')
    {
        for (i = 0; i < size; i++)
        {
            arr[i] = 0;
            arr2[i] = 0;
        }
        printf("\n\"First Array\"\n");
        inputArr(arr, size);
        printf("\"Second Array\"\n");
        inputArr(arr2, size);
        printf("\n");
        printf("\"Before Swap\"\n\n");
        printf("\"First Array Address\"\n");
        printAddress(arr, size);
        printf("\"Second Array Address\"\n");
        printAddress(arr2, size);
        swap(arr, arr2, size);
        printf("\"After Swap\"\n\n");
        printf("\"First Array Address\"\n");
        printAddress(arr, size);
        printf("\"Second Array Address\"\n");
        printAddress(arr2, size);
        run = 1;
        while (run == 1)
        {
            printf("\n\ncontinue Program? (y/N): ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
            }
            else
            {
                printf("Enter only \" y \" or \"N\"");
            }
        }
        if (finish == 'N')
        {
            printf("\"End Program\"\n");
        }
    }
}
int inputArr(int arr[5], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("arr [%d] : ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n");
}
void printAddress(int arr[5], int size)
{
    int i;
    int *ptr;
    ptr = &arr[0];
    for (i = 0; i < size; i++)
    {
        printf("Array[%d] : %d (Address %u)\n", i, arr[i], ptr + i);
    }
    printf("\n");
}
void swap(int arr[5], int arr2[5], int size)
{
    int *tmp, tmpArr[5];
    int i;
    tmp = &arr[0];
    for (i = 0; i < size; i++)
    {
        tmpArr[i] = *tmp + i;
    }
    for (i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
        arr2[i] = tmpArr[i];
    }
}