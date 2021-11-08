#include <stdio.h>

int main()
{
    double A,B,C,A1,A2,A3,A4,A5,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    A1=A*C/2.0;
    A2=pi*C*C;
    A3=(A+B)*C*0.5;
    A4=B*B;
    A5=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",A1,A2,A3,A4,A5);

    return 0;


}