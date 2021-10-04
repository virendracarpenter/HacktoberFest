#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main ()
{
    string names[] = {"Bill", "Charlie", "Fred", "George", "George", "Ginny", "Percy", "Ron"};

    for ( int i=0 ; i < 8 ; i ++ )
    {
        printf("checking index %i\n", i);
        printf("name - %s\n---------\n",names[i]);
        if (strcmp(names[i],"Ron") == 0) //strcmp() this funtion will compare two strings then return true or false
        {
            printf("Name found at index %i \n", i);
            return 0;
        }
    }
    printf("Name not found\n");
    return 1;
}