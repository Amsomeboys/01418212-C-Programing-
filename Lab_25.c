#include <stdio.h>

void DrawTop (int size);
void DrawMiddle (int size);
void DrawBottom (int size);


main() {

    int draw = 1;
    int size;
    while(draw == 1)
   {
        printf("Enter the size of the crucifix (enter -1 to stop program): ");
        scanf("%d", &size);
         if(size >0)
        {
            DrawTop(size);
            DrawMiddle(size);
            DrawBottom(size);
        }
        else if(size == -1)
        {
            printf("\n\"End Progran\"\n");
            draw = 0;
        }
        else
        {
            printf("\"Enter size more than 0\"\n\n");
        }
       
       

    }
}


void DrawTop (int size)
{
        for (int i = 1; i <= size; i++) 
        {    
             for (int j = 1; j <= size; j++) 
            {
                printf(" ");
            }

            for (int x = 1; x <= size; x++) 
            {
                printf("*");
            }
        printf("\n");
    }
}

void DrawMiddle (int size)
{
    for (int i = 1; i <= size; i++) 
        {    
            for (int x = 1; x <= size*3; x++) 
            {
                printf("*");
            }
        printf("\n");
    }
}

void DrawBottom (int size)
{
        for (int i = 1; i <= size+1; i++) 
        {    
             for (int j = 1; j <= size; j++) 
            {
                printf(" ");
            }

            for (int x = 1; x <= size; x++) 
            {
                printf("*");
            }
        printf("\n");
    }
    printf("\n");
}
