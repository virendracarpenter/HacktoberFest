//get positive int from user then display

#include<cs50.h>
#include<stdio.h>

int get_positiveInt(); //prototype

int main(){
    int num = get_positiveInt();
    printf("%i\n", num);
}

//function wiil return value if input is positve
int get_positiveInt(){
    int n;
    do{
        n = get_int("Positive Int : ");
    }
    while (n < 1
    );
    return n;
}