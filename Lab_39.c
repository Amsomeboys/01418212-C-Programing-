#include <stdio.h>

float inputArr(float arr[5], int size);
void printAddress(float arr[5], int size);
void swap(float arr[5], float arr2[5], int size);

main()
{
    float arr[5], arr2[5];
    int size;
    printf("size : ");
    scanf("%d", &size);
    printf("\"First Array\"\n");
    inputArr(arr, size);
    printf("\"Second Array\"\n");
    inputArr(arr2, size);
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
}
float inputArr(float arr[5], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("arr [%d] : ", i);
        scanf("%f", &arr[i]);
    }
    printf("\n");
}
void printAddress(float arr[5], int size)
{
    int i;
    float *ptr;
    ptr = &arr[0];
    for (i = 0; i < size; i++)
    {
        printf("Array[%d] : %.2f (Address %u)\n", i, arr[i], ptr + i);
    }
    printf("\n");
}

void swap(float arr[5], float arr2[5], int size)
{
    float *tmp, tmpArr[5];
    tmp = &arr[0];
    for (int i = 0; i < size; i++)
    {
        tmpArr[i] = *tmp + i;
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr2[i];
        arr2[i] = tmpArr[i];
    }
}
