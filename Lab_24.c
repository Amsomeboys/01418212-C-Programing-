#include <stdio.h>

void plus(float A, float B);
void minus(float A, float B);
void multiply(float A, float B);
void divided(float A, float B);
void mod(int A, int B);
void PrintResult(float result);
void PrintResultInt(int result);

main()
{
    float fn1, fn2,  result;
    int num1,num2;
    int choose, work = 1, out = 'y';

    while (out == 'y')
    {
		work=1;
        printf("Choose Method ->\n (1)Plus\n (2)Minus\n (3)Multiply\n (4)Divided\n (5)Mod\n");
        printf("\nSelect -> : ");
        scanf("%d", &choose);

        if (choose >= 1 && choose <= 4)
        {
            printf("\nPlease Input First Number: ");
            scanf("%f", &fn1);
            printf("\nPlease Input Second Number: ");
            scanf("%f", &fn2);
        }
        if (choose == 5)
        {
            printf("\nPlease Input First Number (Integer): ");
            scanf("%d", &num1);
            printf("\nPlease Input Second Number (Integer): ");
            scanf("%d", &num2);
        }

        switch (choose)
        {
        case 1:
            plus(fn1, fn2);

            break;
        case 2:
          	minus(fn1, fn2);

            break;
        case 3:
            multiply(fn1, fn2);

            break;
        case 4:
            divided(fn1, fn2);
            break;
        case 5:
            mod(num1, num2);
            break;
        case 6:
            printf("\"End Program\"\n\n");

            break;
        default:
            printf("\n\"No Have This Choice\"\n\n");
        }
        while (work == 1)
        {
            printf("Continue Program ? (y/N) : ");
            scanf(" %c", &out);
            if(out == 'y' || out == 'N')
            {
                work = 0;
            }
            else
            {
                printf("Enter only \"y\" or \"N\"");
            }
        }
        if (out == 'N')
        {
            printf("\"End Program\"");
            work = 0;
        }
        printf("\n");
    }
}

void plus(float A, float B)
{
    float result;
    result = A + B;
    PrintResult(result);
}

void minus(float A, float B)
{
    float result;
    result = A - B;
    PrintResult(result);
}

void multiply(float A, float B)
{
    float result;
    result = A * B;
    PrintResult(result);
}

void divided(float A, float B)
{
    float result;
    if (B == 0)
    {
        printf("\n\"Error: Division by zero\"\n\n");
    }
    else
    {
        result = A / B;
        PrintResult(result);
    }
}
void mod(int A, int B)
{
	int result;
	result = A % B;
    PrintResultInt(result);
}
void PrintResult(float result)
{
	printf("\nResult is : %.2f\n\n", result);
}
void PrintResultInt(int result)
{
	printf("\nResult is : %d\n\n", result);
}
