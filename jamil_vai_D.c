#include <stdio.h>
#include <math.h>

int main()
{
    int Ax,Ay,Bx,By,Cx,Cy,Dx,Dy,T;
    double A;
    scanf("%d",&T);

    while (T--)
    {
        scanf("%d %d %d %d %d %d",&Ax,&Ay,&Bx,&By,&Cx,&Cy);

        Dx = fabs(Cx - Bx + Ax);
        Dy = fabs(Ay + By - Cy);

        A = fabs(Ax*By +Bx*Cy +Cx*Dy+Dx*Ay -Ay*Bx-By*Cx-Cy*Dx-Dy*Ax) /2.0;

       
        printf("Case %d:%d %d %lf\n",T,Dx,Dy,A);
    }

    return 0;
    
}