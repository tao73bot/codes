#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,i,j,cnt=0;
        cin >> n;
        for(i=4*n;i>=4;i-=2){
            if(cnt==n){
                break;
            }
            cout << i <<" ";
            cnt++;
        }
        cout << "\n";
    }
    return 0;
}