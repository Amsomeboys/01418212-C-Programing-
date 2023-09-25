#include <stdio.h>
main()
{
    int Array2D[10][10], Array3D[10][10][10], i, j, k, w_size = 0, h_size = 0, d_size = 0, select = 0, run = 0;
    char finish = 'y';
    while (finish == 'y')
    {
        run = 1;
        while (select != 1 && select != 2)
        {
            printf("Array2D Enter (1) / Array3D Enter (2) : ");
            scanf("%d", &select);
            printf("\n");
            if (select != 1 && select != 2)
            {
                printf("Enter only \"1\" or \"2\"\n\n");
            }
        }
        switch (select)
        {
        case 1:
            while (w_size == 0 || h_size == 0)
            {
                while (w_size <= 0 || w_size > 10)
                {
                    printf("Please input Array Width size (maximum = 10): ");
                    scanf("%d", &w_size);
                    if (w_size == 0)
                    {
                        printf("\n\"Please enter width size > 0\"\n");
                    }
                    if (w_size > 10)
                    {
                        printf("\n\"Array Width maximum = 10\"\n\n");
                        w_size = -1;
                    }
                }
                while (h_size <= 0 || h_size > 10)
                {
                    printf("Please input Array Height size (maximum = 10): ");
                    scanf("%d", &h_size);
                    if (h_size == 0)
                    {
                        printf("\n\"Please enter height size > 0\"\n");
                    }
                    if (h_size > 10)
                    {
                        printf("\n\"Array Height maximum = 10\"\n\n");
                        h_size = -1;
                    }
                }
                for (i = 0; i < h_size; i++)
                {
                    for (j = 0; j < w_size; j++)
                    {
                        Array2D[i][j] = 0;
                        printf("Array2D [%d][%d] = %d\n", i, j, Array2D[i][j]);
                    }
                }
            }
            break;
        case 2:
            while (w_size == 0 || h_size == 0 || d_size == 0)
            {
                while (w_size <= 0 || w_size > 10)
                {
                    printf("Please input Array Width (maximum = 10): ");
                    scanf("%d", &w_size);
                    if (w_size == 0)
                    {
                        printf("\n\"Please enter array width  > 0\"\n");
                    }
                    if (w_size > 10)
                    {
                        printf("\n\"Array Width maximum = 10\"\n\n");
                        w_size = -1;
                    }
                }
                while (h_size <= 0 || h_size > 10)
                {
                    printf("Please input Array Height size (maximum = 10): ");
                    scanf("%d", &h_size);
                    if (h_size == 0)
                    {
                        printf("\n\"Please enter height size > 0\"\n");
                    }
                    if (h_size > 10)
                    {
                        printf("\n\"Array Height maximum = 10\"\n\n");
                        h_size = -1;
                    }
                }
                while (d_size <= 0 || d_size > 10)
                {
                    printf("Please input Array Depth (maximum = 10): ");
                    scanf("%d", &d_size);
                    if (d_size == 0)
                    {
                        printf("\n\"Please enter depth  > 0\"\n");
                    }
                    if (d_size > 10)
                    {
                        printf("\n\"Array Depth maximum = 10\"\n\n");
                        d_size = -1;
                    }
                }
                for (i = 0; i < d_size; i++)
                {
                    for (j = 0; j < h_size; j++)
                    {
                        for (k = 0; k < w_size; k++)
                        {
                            Array3D[i][j][k] = 0;
                            printf("Array2D [%d][%d][%d] = %d\n", i, j, k, Array3D[i][j][k]);
                        }
                    }
                }
            }
            break;
        default:
            printf("\"Select only 1 or 2\"\n");
            select = 0;
        }
        run = 1;
        while (run == 1)
        {
            printf("\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                select = 0;
                w_size = 0;
                h_size = 0;
                d_size = 0;
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