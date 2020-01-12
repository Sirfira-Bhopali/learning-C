#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    int aray[size];
    for (int i=0;i<size;i++)
    {
        scanf("%d",&aray[i]);
    }
    sum(aray,size);
}

int sum(int aray[],int size)
{   int sum=0;
    for(int i=0;i<size;i++)
    {
        sum = sum + aray[i];
    }
    printf("sum of array is %d",sum);
}
