#include <stdio.h>

int main()
{
    int employee_num,work_hour;
    float salary_per_hour,total_salary;
    scanf("%d %d",&employee_num,&work_hour);
    scanf("%f",&salary_per_hour);
    total_salary = (work_hour*salary_per_hour);

    printf("NUMBER = %d\n",employee_num);
    printf("SALARY = U$ %.2f\n",total_salary);

    return 0;
}