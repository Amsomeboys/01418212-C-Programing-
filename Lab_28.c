#include <stdio.h>

main()
{
    int Array2D[10][10], Array3D[10][10][10], i, j, k, size, select, run;
    char finish = 'y';
    while (finish == 'y')
    {
        printf("Array2D Enter (1) / Array3D Enter (2) : ");
        scanf("%d", &select);
        switch (select)
        {
        case 1:

            while (size <= 0)
            {
                printf("Please input Array size : ");
                scanf("%d", &size);
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
                printf("Please input Array size : ");
                scanf("%d", &size);
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
            printf("\n\nContinue Program ? (y/N) : ");
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
            printf("\"End Program\"");
        }
    }
}
