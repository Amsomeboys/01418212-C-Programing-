#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
    int arr[5][5][5], sortArr[125], i = 0, j, k, n = 5, index = 0, tmp, w_size = 0, h_size = 0, d_size = 0, run = 0, select = 0;
    char finish = 'y';
    while (finish == 'y')
    {
        while (w_size <= 0 || w_size > 5)
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
        while (select != 1 && select != 2)
        {
            printf("\n\"Min -> Max(1) or Max -> Min(2)\" (Enter 1 or Enter 2) : ");
            scanf("%d", &select);
        }

        printf("\n");
        for (i = 0; i < d_size; i++)
        {
            for (j = 0; j < h_size; j++)
            {
                for (k = 0; k < w_size; k++)
                {
                    arr[i][j][k] = 0;
                }
            }
        }
        for (i = 0; i < w_size * h_size * d_size; i++)
        {
            sortArr[i] = 0;
        }
        srand(time(NULL));
        printf("\"Before Sort\"\n");
        for (i = 0; i < d_size; i++)
        {
            for (j = 0; j < h_size; j++)
            {
                for (k = 0; k < w_size; k++)
                {

                    arr[i][j][k] = rand() % 200 + 1;
                    printf("Array[%d][%d][%d] : %d\n", i, j, k, arr[i][j][k]);
                    sortArr[index] = arr[i][j][k];
                    index++;
                }
            }
        }
        for(i=0;i<100;i++)
        {
			printf("-");
		}
		printf("\n\n");

		printf("\"After Sort\"\n");
        switch (select)
        {
        case 1:
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
            break;
        case 2:
            for (i = 0; i < w_size * h_size * d_size; i++)
            {
                for (j = 0; j < w_size * h_size * d_size; j++)
                {
                    if (sortArr[j] < sortArr[j + 1])
                    {
                        tmp = sortArr[j + 1];
                        sortArr[j + 1] = sortArr[j];
                        sortArr[j] = tmp;
                    }
                }
            }
            break;
        default:
            break;
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
                }
            }
        }
        for (i = 0; i < d_size; i++)
        {
            for (j = 0; j < h_size; j++)
            {
                for (k = 0; k < w_size; k++)
                {
                    printf("Array[%d][%d][%d] : %d \n", i, j, k, arr[i][j][k]);
                }
            }
        }
        run = 1;
        while (run == 1)
        {
            printf("\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                w_size = 0;
                h_size = 0;
                d_size = 0;
                select = 0;
                index = 0;
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
        printf("\n");
    }
}