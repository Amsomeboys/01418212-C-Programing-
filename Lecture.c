#include <stdio.h>

void swap(float *p_x, float *p_y);

main()
{

    int **ptr_ptr, *p, a = 50;

    p = &a;
    ptr_ptr = &p;

    printf("p=%u\n", p); // address a
    // address a;
    printf("ptr_pyr=%u\n", ptr_ptr); // address p;

    printf("*ptr_pyr=%u\n", *ptr_ptr); // value in p -> address a;

    printf("**ptr_pyr=%u\n", **ptr_ptr); // value in p(address a) -> value in a;

    // float x = 5.00, y = 10.00;
    // printf("x=%.2f,y=%.2f\n", x, y);
    // swap(&x, &y);
    // printf("x=%.2f,y=%.2f\n", x, y);

    // int *p;
    // int i, y[4] = {5, 10, 21, 19}, sum = 0;
    // p = &y[0];
    // for (i = 0; i < 4; i++)
    // {
    //     printf("p[%d] = %d \n", i, p + i);
    //     sum += *(p + i);
    // }
    // printf("sum = %d \n", sum);
}

// void swap(float *p_x, float *p_y) // x A =1000(5) y A = 1004(10)
// {
//     float temp;
//     temp = *p_x; // 0.00 = 5.00
//     *p_x = *p_y; // 0.00 = 10.00
//     *p_y = temp; // 0.00 = 5.00
// }