#include <stdio.h>
#include <math.h>

int main()
{
    int t,d;
    double a,b;
    scanf("%d",&t);

    while (t--)
    {
        scanf("%d",&d);

        if(d==1||d==2||d==3){
            printf("N\n");
        }
        else
        {
            a = (d + sqrt((d*d)-4*d))/2.0;
            b = (d - sqrt((d*d)-4*d))/2.0;

            printf("Y %.9lf %.9lf\n",a,b);
        }
        
    }
    

    return 0;
}