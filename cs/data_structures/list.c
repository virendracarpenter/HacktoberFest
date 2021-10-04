#include <stdio.h>
#include <stdlib.h>
int main()
{
    //creating a list pointer with allocating memory

    int *list =  malloc(3 * sizeof(int));
    
    //checking if list is null or not
    if (list == NULL)
    {
        return 1;
    }
                                                //Pointer arthematic
    list[0] = 1;                                //*list = 1;
    list[1] = 2;                                //*(list+1) = 2;
    list[2] = 3;                                //*(list+2) = 3;

    int *tmp = realloc(list, 4* sizeof(int));   //realloc it re allocate memory instide we use malloc again, here two perameters first is already decleaderd memory and secound is the new size of memory. we don't need to copy manualy temp[] = list[] as reallow for us

    if (tmp == NULL)
    {
        return 1;
    }

    tmp[3] = 4;

    

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    

}