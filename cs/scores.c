#include<stdio.h>
#include<cs50.h>

//prototype
float avarage(int length, int arrary[]);

int main()
{

    int n = get_int("Enter number of scores : ");
    int scores[n];

    for (int i = 0 ; i < n ; i ++)
    {
        scores[i] = get_int("Enter Scores : ");
    }
    //finding avarage of scores
    printf("Avarage of Scores is : %f\n", avarage(n, scores));
}


//function to find avarage
float avarage(int length, int arrary[])
{
    float sum = 0.0;
    for (int i = 0 ; i < length ; i ++)
    {
        sum += arrary[i];
    }
    return sum / (float)length;
}
