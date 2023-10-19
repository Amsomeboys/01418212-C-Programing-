#include <stdio.h>
void defaultArray2D(int w_size, int h_size);
void defaultArray3D(int w_size, int h_size, int d_size);
main()
{
    int select=0, w_size = 0, h_size = 0, d_size = 0;
    char finish = 'y';

    while (finish == 'y')
    {
        while (select != 1 && select != 2)
        {
            printf("\nArray2D Enter (1) / Array3D Enter (2) : ");
            scanf("%d", &select);
            if (select != 1 && select != 2)
            {
                printf("\"Enter only \"1\" or \"2\"\n\n");
            }
        }
        if (select == 1)
        {
            while (w_size <= 0 || w_size > 10)
            {
                printf("Enter width size : ");
                scanf("%d", &w_size);
                if (w_size <= 0 || w_size > 10)
                {
                    printf("\"Maximum size is 10\"\n");
                }
            }
            while (h_size <= 0 || h_size > 10)
            {
                printf("Enter height size : ");
                scanf("%d", &h_size);
                if (h_size <= 0 || h_size > 10)
                {
                    printf("\"Maximum size is 10\"\n");
                }
            }
            printf("\n");
            defaultArray2D(w_size, h_size);
        }
        if (select == 2)
        {
            while (w_size <= 0 || w_size > 10)
            {
                printf("Enter width size : ");
                scanf("%d", &w_size);
                if (w_size <= 0 || w_size > 10)
                {
                    printf("\"Maximum size is 10\"\n");
                }
            }
            while (h_size <= 0 || h_size > 10)
            {
                printf("Enter height size : ");
                scanf("%d", &h_size);
                if (h_size <= 0 || h_size > 10)
                {
                    printf("\"Maximum size is 10\"\n");
                }
            }
            while (d_size <= 0 || d_size > 10)
            {
                printf("Enter array depth : ");
                scanf("%d", &d_size);
                if (d_size <= 0 || d_size > 10)
                {
                    printf("\"Maximum size is 10\"\n");
                }
            }
            printf("\n");
            defaultArray3D(w_size, h_size, d_size);
        }
        while (select > 0)
        {
            printf("\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                w_size = 0;
                h_size = 0;
                d_size = 0;
                select = 0;
            }
            else
            {
                printf("Enter only \"y\" or \"N\"");
            }
        }
        if (finish == 'N')
        {
            printf("\"End Program\"");
        }
        printf("\n");
    }
}
void defaultArray2D(int w_size, int h_size)
{
    int Array2D[10][10], i, j;
    for (i = 0; i < h_size; i++)
    {
        for (j = 0; j < w_size; j++)
        {
            Array2D[i][j] = 0;
            printf("Array2D [%d][%d] = %d\n", i, j, Array2D[i][j]);
        }
    }
}
void defaultArray3D(int w_size, int h_size, int d_size)
{
    int Array3D[10][10][10], i, j, k;
    for (i = 0; i < d_size; i++)
    {
        for (j = 0; j < h_size; j++)
        {
            for (k = 0; k < w_size; k++)
            {
                Array3D[i][j][k] = 0;
                printf("Array3D [%d][%d][%d] = %d\n", i, j, k, Array3D[i][j][k]);
            }
        }5
    }
}