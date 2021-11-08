#include <iostream>
#include <vector>
using namespace std;

int find_max(int ara[],int n)
{
    int i,max=-1;
    for(i=0;i<=n;i++){
        if(max<ara[i]){
            max = ara[i];
        }
        else{
            max = max;
        }
    }

    return max;
}

int main()
{
    int n,i;
    int ara[100000];
    while (cin>>n  && n!=0)
    {
        ara[0]=0;
        ara[1]=1;

        for(i=2;i<=n;i++){
            if(i%2==0){
                ara[i] = ara[i/2];
            }
            if(i%2==1){
                ara[i] = ara[(i-1)/2] + ara[((i-1)/2) + 1];
            }
        }

        cout << find_max(ara,n) << endl;
    }
    
    return 0;

}