#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i,cnt=0;
        long long a[4];
        cin >> a[0]>>a[1]>>a[2]>>a[3];
        sort(a,a+4);
        for(i=0;i<2;i++){
            if(a[i]==a[i+1]){
                cnt++;
            }
        }
        if(cnt==3){
            cout << a[0]*a[0] << "\n";
        }
        else if(cnt==2&&a[1]!=a[2]){
            cout << a[0]*a[2] << "\n";
        }
        else if(cnt==2&&a[1]==a[2]){
            cout << a[0]*a[0] << endl;
        }
        else if(cnt==1){
            cout << a[0]*a[2] <<"\n";
        }
        else if(cnt==0){
            cout << a[0]*a[2] << "\n";
        }
    }
    return 0;
}