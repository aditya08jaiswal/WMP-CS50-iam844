#include<stdio.h>
#include<cs50.h>

int main()
{
    int i,j,h;

    printf("Height: ");
    h=GetInt();

    if(h>=0 && h<=23)
    {
        for(i=1;i<=h;i++)
        {
            for(j=h-1;j>=i;j--)
            {
                printf(" ");
            }

           for(j=1;j<=i;j++)
            {
                printf("#");
            }

            printf("  ");

            for(j=1;j<=i;j++)
            {
                printf("#");
            }

            printf("\n");
        }
    }

    else
    {
        main();
    }

    return 0;
}