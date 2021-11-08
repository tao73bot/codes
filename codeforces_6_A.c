#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(((a<b+c)&&(b<a+c)&&(c<a+b))||((a<b+d)&&(b<a+d)&&(d<a+b))||((a<d+c)&&(d<a+c)&&(c<a+d))||((d<b+c)&&(b<d+c)&&(c<b+d))){
        printf("TRIANGLE\n");
    }
    else if((a+b==d)||(a+b==c)||(b+c==a)||(b+c==d)||(a+c==b)||(a+c==d)||(a+d==b)||(a+d==c)||(b+d==a)||(b+d==c)||(c+d==a)||(c+d==b)){
        printf("SEGMENT\n");
    }
    else {
        printf("IMPOSSIBLE\n");
    }

    return 0;
}
