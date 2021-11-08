#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,x=0;
    cin >> n;
    long long b[n];
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    for(i=0;i<n;i++){
        long long ai = b[i]+x;
        cout << ai << " ";
        if(x>=ai){
            x=x;
        }
        else{
            x=ai;
        }
    }
    cout << "\n";

    return 0;
}