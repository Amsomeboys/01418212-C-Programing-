#include <stdio.h>
main()
{
    float arr[2][2][5];
    float *ptr, *ptr2;
    int i, j, k, w_size = 5, h_size = 2, d_size = 2, Mw = 0, Mh = 0, Md = 0, mw = 0, mh = 0, md = 0;

    printf("Input Array\n");
    for (i = 0; i < d_size; i++)
    {
        for (j = 0; j < h_size; j++)
        {
            for (k = 0; k < w_size; k++)
            {
                printf("arr[%d][%d][%d] : ", i, j, k);
                scanf("%f", &arr[i][j][k]);
            }
        }
    }
    for (i = 0; i < d_size; i++)
    {
        for (j = 0; j < h_size; j++)
        {
            for (k = 0; k < w_size; k++)
            {
                if (i == 0 && j == 0 && k == 0)
                {
                    ptr = &arr[i][j][k];
                    ptr2 = &arr[i][j][k];
                }
                if (*ptr < arr[i][j][k])
                {
                    ptr = &arr[i][j][k];
                }
                if (*ptr2 > arr[i][j][k])
                {
                    ptr2 = &arr[i][j][k];
                }
            }
        }
    }

    for (i = 0; i < d_size; i++)
    {
        for (j = 0; j < h_size; j++)
        {
            for (k = 0; k < w_size; k++)
            {
                if (&arr[i][j][k] == ptr)
                {
                    Md = i;
                    Mh = j;
                    Mw = k;
                }
                if (&arr[i][j][k] == ptr2)
                {
                    md = i;
                    mh = j;
                    mw = k;
                }
            }
        }
    }

    printf("\n\"Max value is %.2f at Array[%d][%d][%d]\"\n", *ptr, Md, Mh, Mw);
    printf("\n\"Min value is %.2f at Array[%d][%d][%d]\"\n\n", *ptr2, md, mh, mw);
}
