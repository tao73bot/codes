#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        long long n,k,d,i;
        cin >> n >> k;

        for(i=0;i<k-3;i++){
            cout << "1 ";
        }
        d=n-k+3;

        if(d%2==0){
            if(d%4==0){
                cout << d/2 << " " << d/4 << " " << d/4 << "\n";
            }
            else cout << "2 " << (d-2)/2 << " " << (d-2)/2 << "\n";
        }
        else{
            cout << "1 "<< d/2 << " " << d/2 << "\n";
        }
    }
    return 0;
}