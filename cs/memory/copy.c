//program to copy str
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main (void)
{
    char *s = get_string("s : ");
    char *t = malloc(strlen(s) + 1 ); //malloc - memory allocation. this function will allocate a memory to *t to store chat *s comes under <stdlib.h>

    if (t == NULL)
    {
        return 1;
    }

    for (int i = 0 , n = strlen(s); i <= n ; i++)   //////////////////////
    {                                               //      USE         //
        t[i] = s[i];                                //  strcpy(t , s)   //
    }                                               //////////////////////

    if(strlen(t) > 0)
    {
    //uppercasing the first letter
    t[0] = toupper(t[0]);

    printf("s : %s\n", s);
    printf("t : %s\n", t);
    }
    free(t);                                        // make free memory after using malloc. so pc can use it
}