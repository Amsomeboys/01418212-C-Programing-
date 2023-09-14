#include <stdio.h>
main()
{
    char ch1, ch2, ch3, ch4, ch5, ch6, out = 'y';
    char in1, in2, in3, in4, in5, in6;
    int len1, len2, run = 0;

    while (out == 'y')
    {
        len1 = 0;
        len2 = 0;
        while (len1 <= 0)
        {
            printf("\nUser 1 : Please enter word size (maximum 6): ");
            scanf("%d", &len1);
            if (len1 < 0 || len1 > 6)
            {
                printf("\nEnter number in range 0 - 6 !!!\n");
                len1 = 0;
            }
            else
            {
                printf("\nUser 1 : Please enter word : ");
                if (len1 == 1)
                {
                    scanf(" %c", &ch1);
                }
                else if (len1 == 2)
                {
                    scanf(" %c%c", &ch1, &ch2);
                }
                else if (len1 == 3)
                {
                    scanf(" %c%c%c", &ch1, &ch2, &ch3);
                }
                else if (len1 == 4)
                {
                    scanf(" %c%c%c%c", &ch1, &ch2, &ch3, &ch4);
                }
                else if (len1 == 5)
                {
                    scanf(" %c%c%c%c%c", &ch1, &ch2, &ch3, &ch4, &ch5);
                }
                else if (len1 == 6)
                {
                    scanf(" %c%c%c%c%c%c", &ch1, &ch2, &ch3, &ch4, &ch5, &ch6);
                }
                run = 1;
            }
        }

        while (run == 1 && len2 == 0)
        {
            printf("\nUser 2 : Please enter word size (maximum 6): ");
            scanf(" %d", &len2);

            if (len2 >= 1 && len2 <= 6)
            {
                printf("\nUser 2 : Please enter word want to search : ");
                if (len2 == 1)
                {
                    scanf(" %c", &in1);
                    if (in1 == ch1)
                    {
                        printf("\nword \"%c\" found in text at 1 ", in1);
                    }
                    else if (in1 == ch2)
                    {
                        printf("\nword \"%c\" found in text at 2 ", in1);
                    }
                    else if (in1 == ch3)
                    {
                        printf("\nword \"%c\" found in text at 3 ", in1);
                    }
                    else if (in1 == ch4)
                    {
                        printf("\nword \"%c\" found in text at 4 ", in1);
                    }
                    else if (in1 == ch5)
                    {
                        printf("\nword \"%c\" found in text at 5 ", in1);
                    }
                    else if (in1 == ch6)
                    {
                        printf("\nword \"%c\" found in text at 6 ", in1);
                    }
                    else
                    {
                        printf("%c was not found in text", in1);
                    }
                }
                else if (len2 == 2)
                {
                    scanf(" %c%c", &in1, &in2);
                    if (in1 == ch1)
                    {
                        if (in1 == ch1 && in2 == ch2)
                        {
                            printf("\nword \"%c%c\" found in text at 1 ", in1, in2);
                        }
                        else
                        {
                            printf("%c%c was not found in text", in1, in2);
                        }
                    }
                    else if (in1 == ch2)
                    {
                        if (in1 == ch2 && in2 == ch3)
                        {
                            printf("\nword \"%c%c\" found in text at 2 ", in1, in2);
                        }
                        else
                        {
                            printf("%c%c was not found in text", in1, in2);
                        }
                    }
                    else if (in1 == ch3)
                    {
                        if (in1 == ch3 && in2 == ch4)
                        {
                            printf("\nword \"%c%c\" found in text at 3", in1, in2);
                        }
                        else
                        {
                            printf("%c%c was not found in text", in1, in2);
                        }
                    }
                    else if (in1 == ch4)
                    {
                        if (in1 == ch4 && in2 == ch5)
                        {
                            printf("\nword \"%c%c\" found in text at 4", in1, in2);
                        }
                        else
                        {
                            printf("%c%c was not found in text", in1, in2);
                        }
                    }
                    else if (in1 == ch5)
                    {
                        if (in1 == ch5 && in2 == ch6)
                        {
                            printf("\nword \"%c%c\" found in text at 5 ", in1, in2);
                        }
                        else
                        {
                            printf("%c%c was not found in text", in1, in2);
                        }
                    }
                    else
                    {
                        printf("%c%c was not found in text", in1, in2);
                    }
                }
                else if (len2 == 3)
                {
                    scanf(" %c%c%c", &in1, &in2, &in3);
                    if (in1 == ch1)
                    {
                        if (in1 == ch1 && in2 == ch2 && in3 == ch3)
                        {
                            printf("\nword \"%c%c%c\" found in text at 1 ", in1, in2, in3);
                        }
                        else
                        {
                            printf("%c%c%c was not found in text", in1, in2, in3);
                        }
                    }
                    else if (in1 == ch2)
                    {
                        if (in1 == ch2 && in2 == ch3 && in3 == ch4)
                        {
                            printf("\nword \"%c%c%c\" found in text at 2 ", in1, in2, in3);
                        }
                        else
                        {
                            printf("%c%c%c was not found in text", in1, in2, in3);
                        }
                    }
                    else if (in1 == ch3)
                    {
                        if (in1 == ch3 && in2 == ch4 && in3 == ch5)
                        {
                            printf("\nword \"%c%c%c\" found in text at 3 ", in1, in2, in3);
                        }
                        else
                        {
                            printf("%c%c%c was not found in text", in1, in2, in3);
                        }
                    }
                    else if (in1 == ch4)
                    {
                        if (in1 == ch4 && in2 == ch5 && in3 == ch6)
                        {
                            printf("\nword \"%c%c%c\" found in text at 4 ", in1, in2, in3);
                        }
                        else
                        {
                            printf("%c%c%c was not found in text", in1, in2, in3);
                        }
                    }
                    else
                    {
                        printf("%c%c%c was not found in text", in1, in2, in3);
                    }
                }
                else if (len2 == 4)
                {
                    scanf(" %c%c%c%c", &in1, &in2, &in3, &in4);
                    if (in1 == ch1)
                    {
                        if (in1 == ch1 && in2 == ch2 && in3 == ch3 && in4 == ch4)
                        {
                            printf("\nword \"%c%c%c%c\" found in text at 1 ", in1, in2, in3, in4);
                        }
                        else
                        {
                            printf("%c%c%c%c was not found in text", in1, in2, in3, in4);
                        }
                    }
                    else if (in1 == ch2)
                    {
                        if (in1 == ch2 && in2 == ch3 && in3 == ch4 && in4 == ch5)
                        {
                            printf("\nword \"%c%c%c%c\" found in text at 2 ", in1, in2, in3, in4);
                        }
                        else
                        {
                            printf("%c%c%c%c was not found in text", in1, in2, in3, in4);
                        }
                    }
                    else if (in1 == ch3)
                    {
                        if (in1 == ch3 && in2 == ch4 && in3 == ch5 && in4 == ch6)
                        {
                            printf("\nword \"%c%c%c%c\" found in text at 3 ", in1, in2, in3, in4);
                        }
                        else
                        {
                            printf("%c%c%c%c was not found in text", in1, in2, in3, in4);
                        }
                    }
                    else
                    {
                        printf("%c%c%c%c was not found in text", in1, in2, in3, in4);
                    }
                }
                else if (len2 == 5)
                {
                    scanf(" %c%c%c%c%c", &in1, &in2, &in3, &in4, &in5);
                    if (in1 == ch1)
                    {
                        if (in1 == ch1 && in2 == ch2 && in3 == ch3 && in4 == ch4 && in5 == ch5)
                        {
                            printf("\nword \"%c%c%c%c%c\" found in text at 1 ", in1, in2, in3, in4, in5);
                        }
                        else
                        {
                            printf("%c%c%c%c%c was not found in text", in1, in2, in3, in4, in5);
                        }
                    }
                    else if (in1 == ch2)
                    {
                        if (in1 == ch2 && in2 == ch3 && in3 == ch4 && in4 == ch5 && in5 == ch6)
                        {
                            printf("\nword \"%c%c%c%c%c\" found in text at 2 ", in1, in2, in3, in4, in5);
                        }
                        else
                        {
                            printf("%c%c%c%c%c was not found in text", in1, in2, in3, in4, in5);
                        }
                    }
                    else
                    {
                        printf("%c%c%c%c%c was not found in text", in1, in2, in3, in4, in5);
                    }
                }
                else if (len2 == 6)
                {
                    scanf(" %c%c%c%c%c%c", &in1, &in2, &in3, &in4, &in5, &in6);
                    if (in1 == ch1)
                    {
                        if (in1 == ch1 && in2 == ch2 && in3 == ch3 && in4 == ch4 && in5 == ch5 && in6 == ch6)
                        {
                            printf("\nword \"%c%c%c%c%c%c\" was found in text ", in1, in2, in3, in4, in5, in6);
                        }
                        else
                        {
                            printf("%c%c%c%c%c%c was not found in text ", in1, in2, in3, in4, in5, in6);
                        }
                    }
                    else
                    {
                        printf("%c%c%c%c%c%c was not found in text", in1, in2, in3, in4, in5, in6);
                    }
                }
                run = 0;
            }
            else
            {
                printf("\nEnter number in range 0 - 6 !!!\n");
                len2 = 0;
            }
        }
        while (run == 0)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &out);
            if (out == 'y' || out == 'N')
            {
                run = 1;
            }
            else
            {
                printf("Enter only \" y \" or \"N\"");
            }
        }
        if (out == 'N')
        {
            printf("\"End Program\"");
        }
    }
    printf("\n");
}