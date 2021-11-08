#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,i,j,sum1=0,sum2=0;
        cin >> n;
        long long a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        reverse(a,a+n);
        for(i=0;i<n;i++){
            if(i==0) sum1+=a[i];
            else if(i==1||i==2) sum2+=a[i];
            else if(i%2==0){
                sum2+=a[i];
            }
            else if(i%2!=0){
                sum1+=a[i];
            }
        }
        if(sum1>sum2){
            cout << "first" << endl;
        }
        else if(sum1<sum2){
            cout << "second" << endl;
        }
        else if(sum1==sum2){
            cout << "draw" << endl;
        }
    }
    
    return 0;
}