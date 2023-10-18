#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    int *ptr2 = arr2;

    printf("%u\n", ptr);
    printf("%u\n", ptr2);

    return 0;
}
