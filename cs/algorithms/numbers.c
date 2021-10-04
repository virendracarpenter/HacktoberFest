#include <cs50.h>
#include <stdio.h>

int main ()
{
    int numbers[]= {50, 85, 98, 7, 44, 14, 0, 4};

    for (int i = 0 ; i < 8 ; i++)
    {
        if (numbers[i] == 0)
        {
            printf("number found at index %i\n", i);
            return 0;
        }
    }
    printf("number is not found \n");
    return 1;
}