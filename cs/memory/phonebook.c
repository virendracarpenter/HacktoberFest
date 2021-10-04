#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL)
    {
        return 1;
    }

    char *name = get_string("Name: ");
    char *num = get_string("Number: ");

    fprintf(file, "%s,%s\n", name, num);

    fclose(file);
}