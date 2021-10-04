#include <stdio.h>
#include <cs50.h>

void draw(int h);

int main()
{
    int height = get_int("Height : ");
    draw(height);
}

//itrative
/*
void draw(int h)
{
    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

}

*/
//recursive

void draw(int h)
{
    if(h == 0)
    {
        return;
    }
    draw(h - 1);

    for(int i=0; i < h; i++)
    {
        printf(" * ");
    }
    printf("\n");
}