#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;

    if(n==1 && t==10){
        cout << "-1\n";
        return 0;
    }

    cout << t;

    if(t<=9){
        for(int i=1;i<n;i++){
        cout << "0";
        }
    }
    else{
        for(int i=1;i<n-1;i++){
        cout << "0";
        }
    }
    cout << "\n";

    return 0;
}