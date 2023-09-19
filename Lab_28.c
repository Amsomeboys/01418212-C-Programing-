#include <stdio.h>

main()
{
    int Array2D[10][10], Array3D[10][10][10], i, j, k, size = 0, select, run;
    char finish = 'y';
    while (finish == 'y')
    {
        while (select != 1 && select != 2)
        {
            printf("Array2D Enter (1) / Array3D Enter (2) : ");
            scanf("%d", &select);
            if (select != 1 && select != 2)
            {
                printf("Enter only \"1\" or \"2\"\n\n");
            }
        }

        switch (select)
        {
        case 1:

            while (size <= 0)
            {
                while (size == 0 || size > 10)
                {
                    printf("Please input Array size (maximum = 10): ");
                    scanf("%d", &size);
                    if (size == 0 || size > 10)
                    {
                        printf("Array maximum = 10\n\n");
                    }
                }
                for (i = 0; i < size; i++)
                {
                    for (j = 0; j < size; j++)
                    {
                        Array2D[i][j] = 0;
                        printf("Array2D [%d][%d] = %d\n", i, j, Array2D[i][j]);
                    }
                }
                if (size == 0)
                {
                    printf("\"Please enter size > 0\"\n");
                }
            }

            break;
        case 2:
            while (size <= 0)
            {
                while (size == 0 || size > 10)
                {
                    printf("Please input Array size (maximum = 10): ");
                    scanf("%d", &size);
                    if (size == 0 || size > 10)
                    {
                        printf("\"Array maximum = 10\"\n\n");
                    }
                }
                for (i = 0; i < size; i++)
                {
                    for (j = 0; j < size; j++)
                    {
                        for (k = 0; k < size; k++)
                        {
                            Array3D[i][j][k] = 0;
                            printf("Array2D [%d][%d][%d] = %d\n", i, j, k, Array3D[i][j][k]);
                        }
                    }
                }
                if (size == 0)
                {
                    printf("\"Please enter size > 0\"\n");
                }
            }

            break;
        default:
            printf("\"Select only 1 or 2\"\n");
            select = 0;
        }
        while (run == 1)
        {
            printf("\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 0;
                select = 0;
                size = 0;
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
