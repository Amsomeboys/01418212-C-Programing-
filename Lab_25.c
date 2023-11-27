#include <stdio.h>

void DrawTop(int size);
void DrawMiddle(int size);
void DrawBottom(int size);

main()
{
    int draw = 1;
    int size = 0;
    int run = 0;
    char finish = 'y';
    while (finish == 'y')
    {
        run = 0;
        while (size <= 0)
        {
            printf("Enter the size of the crucifix : ");
            scanf("%d", &size);
        }

        if (size > 0)
        {
            DrawTop(size);
            DrawMiddle(size);
            DrawBottom(size);
        }
        else
        {
            printf("\"Enter size more than 0\"\n\n");
        }
        while (run == 0)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            if (finish == 'y' || finish == 'N')
            {
                run = 1;
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

void DrawTop(int size)
{
    int i, j, x;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            printf(" ");
        }

        for (x = 1; x <= size; x++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void DrawMiddle(int size)
{
    int i, j;
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size * 3; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void DrawBottom(int size)
{
    int i, j, x;
    for (i = 1; i <= size + 1; i++)
    {
        for (j = 1; j <= size; j++)
        {
            printf(" ");
        }

        for (x = 1; x <= size; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}