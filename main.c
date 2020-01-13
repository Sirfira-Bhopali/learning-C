#include <stdio.h>
#include <stdlib.h>

struct employe
{
    char ID[1];
    float salary;
    char name[10];
    float tax;
};
int main()
{
    float deducted_amt;
    struct employe emp;
    scanf("%s %f %s %f",&emp.ID,&emp.salary,&emp.name,&emp.tax);
    deducted_amt=emp.salary*(emp.tax/100);
    printf("%s %f",emp.ID,deducted_amt);

}
