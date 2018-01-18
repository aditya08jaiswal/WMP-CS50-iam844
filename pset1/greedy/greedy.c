#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main()
{
    int coins=0,n;
    float k;

    printf("O hai! How much change is owed?\n");

    do
    {
        k=GetFloat();
    }while(k<0);

    k *= 100.0;
    n = (int) round(k);

    while(n>=25)
    {
        coins++;
        n=n-25;
    }

    while(n>=10)
    {
        coins++;
        n=n-10;
    }

    while(n>=5)
    {
        coins++;
        n=n-5;
    }

    while(n>=1)
    {
        coins++;
        n=n-1;
    }

    printf("%d\n",coins);

    return 0;
}