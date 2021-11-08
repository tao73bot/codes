#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i,p=0,q=0;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2!=i%2){
                if(i%2==0){
                    p++;
                }
                else{
                    q++;
                }
            }
        }
        if(q!=p){
            cout << "-1\n";
        }
        else{
            cout << p <<"\n";
        }
    }
    return 0;
}