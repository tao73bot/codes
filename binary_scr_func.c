#include <stdio.h>

int b_scarch(int ara,int low,int high,int mid)
{
    int num;
    while (low<=high)
    {
        mid=(low+high)/2;
        if(num==ara[mid]){
            break;
        }
        if(num<ara[mid]){
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }

    }
    
    return mid;
}

int main()
{
    int ara[]={10,11,12,13,19,39,45,54,56,67,74,98,100};
    int num=12;
    int low=0;
    int high=13;
    int mid;
    b_scarch(ara,low,high,mid);
    if(low>high){
        printf("%d is not in the array\n",num);
    }
    else
    {
        printf("%d is found in the arrray.It is the %d th element of the array.\n",ara[mid],mid);
    }

    return 0;
    
}