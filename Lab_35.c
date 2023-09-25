#include <stdio.h>
#include <time.h>
void sort_3d_array(int arr[5][5][5], int d_size, int h_size, int w_size);
int arr[5][5][5], sortArr[125], d_size = 0, h_size = 0, w_size = 0, index = 0, i = 0, j = 0, k = 0;
main()
{
    char finish = 'y', run = 0;
    while (finish == 'y')
    {
        for (i = 0; i < d_size; i++)
        {
            for (j = 0; j < h_size; j++)
            {
                for (k = 0; k < w_size; k++)
                {
                    arr[i][j][k] = 0;
                    sortArr[index] = 0;
                    index++;
                }
            }
        }
        while (w_size <= 0 || w_size > 10)
        {
            printf("Please input Array Width (maximum = 5): ");
            scanf("%d", &w_size);
            if (w_size == 0)
            {
                printf("\n\"Please enter array width  > 0\"\n");
            }
            if (w_size > 5)
            {
                printf("\n\"Array Width maximum = 5\"\n\n");
                w_size = -1;
            }
        }
        while (h_size <= 0 || h_size > 5)
        {
            printf("Please input Array Height size (maximum = 5): ");
            scanf("%d", &h_size);
            if (h_size == 0)
            {
                printf("\n\"Please enter height size > 0\"\n");
            }
            if (h_size > 5)
            {
                printf("\n\"Array Height maximum = 5\"\n\n");
                h_size = -1;
            }
        }
        while (d_size <= 0 || d_size > 5)
        {
            printf("Please input Array Depth (maximum = 5): ");
            scanf("%d", &d_size);
            if (d_size == 0)
            {
                printf("\n\"Please enter depth  > 0\"\n");
            }
            if (d_size > 5)
            {
                printf("\n\"Array Depth maximum = 5\"\n\n");
                d_size = -1;
            }
        }
        printf("\n");
        sort_3d_array(arr, d_size, h_size, w_size);
        run = 1;
        while (run == 1)
        {
            printf("\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                index = 0;
                d_size = 0;
                h_size = 0;
                w_size = 0;
                printf("\n");
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
void sort_3d_array(int arr[5][5][5], int d_size, int h_size, int w_size)
{
    srand(time(NULL));
    int tmp = 0;
    for (i = 0; i < d_size; i++)
    {
        for (j = 0; j < h_size; j++)
        {
            for (k = 0; k < w_size; k++)
            {
                arr[i][j][k] = rand() % 200 + 1;
                sortArr[index] = arr[i][j][k];
                index++;
            }
        }
    }
    for (i = 0; i < w_size * h_size * d_size; i++)
    {
        for (j = 0; j < w_size * h_size * d_size; j++)
        {
            if (sortArr[j] > sortArr[j + 1])
            {
                tmp = sortArr[j];
                sortArr[j] = sortArr[j + 1];
                sortArr[j + 1] = tmp;
            }
        }
    }
    index = 0;
    for (i = 0; i < d_size; i++)
    {
        for (j = 0; j < h_size; j++)
        {
            for (k = 0; k < w_size; k++)
            {
                arr[i][j][k] = sortArr[index];
                index++;
                printf("Array[%d][%d][%d] : %d \n", i, j, k, arr[i][j][k]);
            }
        }
    }
}