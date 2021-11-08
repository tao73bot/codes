#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n,i;
        cin >> n;
        int a[n];
        for(i=0;i<n;i++){
            cin >> a[i];
        }
        for(i=0;i<n;i++){
            if(i%2==0){
                cout << (-1)*a[i+1]<<" ";
            }
            else{
                cout << a[i-1] << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}