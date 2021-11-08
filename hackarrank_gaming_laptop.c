#include <stdio.h>

int getBattery(int event_count,int* event)
{
    int n,charge;
   
    for(event_count=0;event_count<n;++event_count){
        if(50+event[event_count]>=100){
            charge=100;
            printf("%d\n",charge);
        }
        else if(50+event[event_count]<100)
        {
            charge=50+event[event_count];
            printf("%d\n",charge);
        }
        
    }

    return charge;
}

int main()
{
    int n,charge;
    scanf("%d",&n);
    int event[n];
    
    for(i=0;i<n;++i){
        scanf("%d",&event[i]);
    }

    getBattery(event,charge);

    return 0;
}