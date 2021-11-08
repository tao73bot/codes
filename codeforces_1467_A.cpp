#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        
        if(n==1){
            cout << "9\n";
        }
        if(n==2){
            cout << "98\n";
        }
        if(n==3){
            cout << "989\n";
        }
        else if(n>=4){
            cout << "989";
            for(int i=3;i<n;i++){
                cout << (i-3)%10;
            }
            cout << "\n";
        }
    }
    return 0;
}