#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=2;
    cin >> n;
    cout << x << " ";
    for(int i=2;i<n;i++){
        x+=i;
        if(x>n){
            x-=n;
        }
        cout << x << " ";
    }
    cout << endl;

    return 0;
}