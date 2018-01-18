#include<stdio.h>
#include<cs50.h>

int main()
{
    int n;

    printf("Minutes: ");
    n=GetInt();

    printf("Bottles: %d\n",n*12);

    return 0;
}