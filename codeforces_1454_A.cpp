#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;

        if(n%2==0)
        {
            for(i=n;i>=1;i--){
                cout << i <<" ";
            }
        }
        else{
            cout << n <<" ";
            for(i=1;i<n;i++){
                cout << i << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}