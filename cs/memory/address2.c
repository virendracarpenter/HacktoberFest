#include <cs50.h>
#include <stdio.h>

int  main(void)
{
    string s = "HI!";
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
}
