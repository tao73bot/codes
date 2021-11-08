#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,i,a=0,b=0;
    cin >> n;
    int c[n];
    for(i=0;i<n;i++){
        cin >> c[i];
        if(c[i]==5) a++;
        if(c[i]==0) b++;
    }
    if(b==0){
        cout << "-1\n";
    }
    else{
        if(a<9){
            cout << "0\n";
        }
        else{ 
            for(i=1;i<=a-a%9;i++){
                cout << 5;
            }
            for(i=1;i<=b;i++){
                cout << 0;
            }
            cout << "\n";
        }
    }
    return 0;
}