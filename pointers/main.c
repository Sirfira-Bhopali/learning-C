#include <stdio.h>
#include <stdlib.h>

int main()
{
    int values[3]={69,96,6};
    int *pointer_values[3];
    for (int i=0;i<3;i++)
    {
        pointer_values[i]=&values[i];
    }
    for (int j=0;j<3;j++)
    {
        printf("value using pointer at value [%d] is %d \n",j,*pointer_values[j]);
    }

}
