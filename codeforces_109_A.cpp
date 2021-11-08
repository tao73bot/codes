#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a,b,n,f=0;
    cin >> n;
    
    for(b=n/7;b>=0;b--){
        if((n-(b*7))%4==0){
            a=(n-(b*7))/4;
            f=1;
            break;
        }
    }
    if(f==0){
        cout << "-1";
    }
    else{
        while(a--){
            cout << 4;
        }
        while(b--){
            cout << 7;
        }
    }
    cout << "\n";
    return 0;
}