//swap values using pointer, addresses and function
#include <stdio.h>

void swap(int *x ,int *y);

int main()
{
    int x = 34;
    int y = 35;

    printf("Before Swap x : %i y : %i\n", x, y);

    swap(&x,&y);

    printf("After Swap x : %i y : %i\n", x, y);

}

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}