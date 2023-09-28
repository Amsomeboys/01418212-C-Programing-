#include <stdio.h>

int factorial(int num);

main()
{
    int num, result_1, result_2, i;
    printf("\"Find Factorial\"\n");
    printf("Enter a number: ");
    scanf("%d", &num);

    // use func
    result_1 = factorial(num);

    result_2 = 1;
    // not use func
    for (i = 1; i <= num; i++)
    {
        result_2 = result_2 * i;
    }

    // with func
    printf("Factorial of %d is %d\n", num, result_1);

    // without func
    printf("Factorial of %d is %d\n", num, result_2);
}

int factorial(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}