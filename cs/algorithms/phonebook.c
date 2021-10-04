//program to find the number of person by its name

#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct   //custom data stucture.
{
    string name;
    string number;
}
person;

int main()
{
    person people[2];

    people[0].name = "Virendra";
    people[0].number = "+91 9876543210";

    people[1].name = "Vir";
    people[1].number = "+91 9876543211";

    for (int i = 0 ; i < 2 ; i++ )
    {
        if (strcmp(people[i].name, "Virendra") == 0)
        {
            printf("Number found : %s\n", people[i].number);
            return 0;
        }
    }
    printf("No People Found\n");
    return 1;
}