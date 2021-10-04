//program take arguments from cmd.
#include<cs50.h>
#include<stdio.h>

int main(int argc, string argv[]) // argc - argument count (number of word including extuable ) | argv - argument vector (array of strings (to reperst the word location))
{
    if (argc ==2)
    {
        printf("Hello, %s\n", argv[1]);
    }
    else
        printf("Hello World\n");
}
