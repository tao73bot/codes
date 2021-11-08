#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    int i=0,c,d;
    if(n<2020){
        cout << "NO\n";
    }
    if(n>=2020){
        if(n%2020==0||n%2021==0){
            cout << "YES\n";
        }
        else{
            d=n;
            while (n-2020>0)
            {
                n-=2020;
                if(n%2021==0){
                    cout << "YES\n";
                    return;
                }
                if(n%2021!=0) i++;
            }
            if(i==(d/2020)){
                cout << "NO\n";
            }    
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        solve(n);
    }
    return 0;
}