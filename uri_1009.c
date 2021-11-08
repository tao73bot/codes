#include <stdio.h>

int main()
{
    double salary,sell,total_salary;
    char ch;
    scanf("%s",&ch);
    scanf("%lf %lf",&salary,&sell);
    total_salary=(salary+sell*0.15);

    printf("TOTAL = R$ %0.2lf\n",total_salary);

    return 0;

}