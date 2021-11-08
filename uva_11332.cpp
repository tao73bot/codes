#include <bits/stdc++.h>
using namespace std;
 
int dis_sum(int n)
{
    int s=0;
    while(n>0)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    while(1)
    {
        long long n,sum=0;
        cin >> n;
        if(n==0){
            break;
        }
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        while(sum/10!=0){
            int d=sum;
            sum=dis_sum(d);
        }
        cout << sum << "\n";
    }
    return 0;
}