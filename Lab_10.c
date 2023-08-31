#include <stdio.h>

char ch1='i',ch2='l',ch3='o',ch4='v',ch5='e',ch6='c',ch7='p',ch8='r',ch9='o',ch10='g',ch11='r',ch12='a',ch13='m';
int match;
int Compareword(char in );

main()
{
    char in1,in2,in3,in4,in5,in6,in7,in8;
    int len,run=1;

while(run == 1)
{
    printf("Please enter word size (maximum 8) or \"-1\" to stop program: ");
    scanf("%d",&len);

    if(len == -1)
    {
        printf("\"End Program\"\n");
        run = 0;
    }
     if(run != 0)
    {
    printf("Please enter word : ");
    if(len == 1)
    {
        scanf(" %c",&in1);
        Compareword(in1);
        if(match == 1)
        {
            printf("%c was found in text",in1);
        }

    }
    else  if(len == 2)
    {
        scanf(" %c %c",&in1,&in2);
        Compareword(in1);
        Compareword(in2);
        if(match == 2)
        {
            printf("%c%c was found in text",in1,in2);
        }
    }
    else  if(len == 3)
    {
        scanf(" %c %c %c",&in1,&in2,&in3);
        Compareword(in1);
        Compareword(in2);
        Compareword(in3);
        if(match == 3)
        {
            printf("%c%c%c was found in text",in1,in2,in3);
        }
    }
     else  if(len == 4)
    {
        scanf(" %c %c %c %c",&in1,&in2,&in3,&in4);
        Compareword(in1);
        Compareword(in2);
        Compareword(in3);
        Compareword(in4);
        if(match == 4)
        {
            printf("%c%c%c%c was found in text",in1,in2,in3,in4);
        }
    }
     else  if(len == 5)
    {
        scanf(" %c %c %c %c %c",&in1,&in2,&in3,&in4,&in5);
        Compareword(in1);
        Compareword(in2);
        Compareword(in3);
        Compareword(in4);
        Compareword(in5);
        if(match == 5)
        {
            printf("%c%c%c%c%c was found in text",in1,in2,in3,in4,in5);
        }
    }
      else if(len == 6)
    {
        scanf(" %c %c %c %c %c %c",&in1,&in2,&in3,&in4,&in5,&in6);
        Compareword(in1);
        Compareword(in2);
        Compareword(in3);
        Compareword(in4);
        Compareword(in5);
        Compareword(in6);
         if(match == 6)
        {
            printf("%c%c%c%c%c%c was found in text",in1,in2,in3,in4,in5,in6);
        }
    }
      else if(len == 7)
    {
        scanf(" %c %c %c %c %c %c %c",&in1,&in2,&in3,&in4,&in5,&in6,&in7);
        Compareword(in1);
        Compareword(in2);
        Compareword(in3);
        Compareword(in4);
        Compareword(in5);
        Compareword(in6);
        Compareword(in7);
         if(match == 7)
        {
            printf("%c%c%c%c%c%c%c was found in text",in1,in2,in3,in4,in5,in6,in7);
        }
    }
      else if(len == 8)
    {
        scanf(" %c %c %c %c %c %c %c %c",&in1,&in2,&in3,&in4,&in5,&in6,&in7,&in8);
        Compareword(in1);
        Compareword(in2);
        Compareword(in3);
        Compareword(in4);
        Compareword(in5);
        Compareword(in6);
        Compareword(in7);
        Compareword(in8);
         if(match == 8)
        {
            printf("%c%c%c%c%c%c%c%c was found in text",in1,in2,in3,in4,in5,in6,in7,in8);
        }
    }
    else
    {
        printf("Enter word size again");
    }
    }
}
}

int Compareword(char in )
{
        if(in == ch1)
        {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch2)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch3)
        {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch4)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }

        else if(in == ch6)
        {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch7)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch8)
        {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch9)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch10)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch11)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch12)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else if(in == ch13)
         {
        printf("\nword \"%c\" found in text ",in);
        match++;
        }
        else
        printf("word \"%c\" Not found ",in);
        printf("\n\n");
    return match;
}
