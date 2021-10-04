#include <cs50.h>
#include <stdio.h>

int main(){
    printf("Addtion\n");
    long x = get_long("X : ");
    long y = get_long("Y : ");

    printf("X + Y = %li \n", x+y);
}