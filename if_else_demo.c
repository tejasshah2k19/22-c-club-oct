#include <stdio.h>

int main(int argc, char const *argv[])
{
    // take a number from user and print it's odd or even
    int num;
    printf("\nEnter number");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("\nNum is Even");
    }
    if (num % 2 != 0)
    {
        printf("\nNum is Odd");
    }

    if (num % 2 == 0)
    {
        printf("\nNum is Even");
    }
    else
    {
        printf("\nNum is Odd");
    }

    return 0;
}
