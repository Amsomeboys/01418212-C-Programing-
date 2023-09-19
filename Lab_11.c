#include <stdio.h>

main()
{
    int direction = 0, distance = 0, x = 0, y = 0, press = 0, tmp = 0;
    char finish = 'y';

    while (finish == 'y' && press <= 5)
    {
        printf("Please select direction 8(N) 9(NE) 6(E) 3(SE) 2(S) 1(SW) 4(W) 7(NW) : ");
        scanf("%d", &direction);
        switch (direction)
        {
        case 8:
            y++;
            press++;
            break;
        case 9:
            y++;
            x++;
            press++;
            break;
        case 6:
            x++;
            press++;
            break;
        case 3:
            x++;
            y--;
            press++;
            break;
        case 2:
            y--;
            press++;
            break;
        case 1:
            y--;
            x--;
            press++;
            break;
        case 4:
            x--;
            press++;
            break;
        case 7:
            y++;
            x--;
            press++;
            break;
        default:
            break;
        }

        printf("\n\"Robot location x = %d y = %d \"\n\n", x, y);
        if (direction == 8)
        {
            printf("Bot Direction is \"North\"");
        }
        else if (direction == 6)
        {
            printf("Bot Direction is \"East\"");
        }
        else if (direction == 2)
        {
            printf("Bot Direction is \"South\"");
        }
        else if (direction == 4)
        {
            printf("Bot Direction is \"West\"");
        }
        else if (direction == 9)
        {
            printf("Bot Direction is \"North East\"");
        }
        else if (direction == 3)
        {
            printf("Bot Direction is \"South East\"");
        }
        else if (direction == 1)
        {
            printf("Bot Direction is \"South West\"");
        }
        else if (direction == 7)
        {
            printf("Bot Direction is \"North West\"");
        }
        printf("\n\n");

        while (press == 5)
        {
            printf("\n\nContinue Program ? (y/N) : ");
            scanf(" %c", &finish);
            printf("\n\n");
            if (finish == 'y' || finish == 'N')
            {
                tmp = tmp + press;
                press = 0;
            }
            else
            {
                printf("Enter only \" y \" or \"N\"");
            }
        }

        if (finish == 'N')
        {
            printf("\"press = %d\"\n\n", tmp);
            printf("\"End Program\"");
        }
    }
}