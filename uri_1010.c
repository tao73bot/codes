#include <stdio.h>

int main()
{
    double code_1,code_2,unit_1,unit_2,price_1_unit,price_2_unit,bill;
    scanf("%lf %lf %lf %lf %lf %lf",&code_1,&unit_1,&price_1_unit,&code_2,&unit_2,&price_2_unit);
    bill=(unit_1*price_1_unit)+(unit_2*price_2_unit);

    printf("VALOR A PAGAR: R$ %.2lf\n",bill);

    return 0;
}