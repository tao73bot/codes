#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    
    while(t--)
    {
        int n,k,x,y,i,s=0;
        cin >> n >> k >> x >> y;
        for(i=1;i<=n;i++){
            if((x+k*i)%n==y){
                cout << "YES\n";
                s=1;
                break;
            }
        }
        if(s==0){
            cout << "NO\n";
        }
    }
    return 0;
}