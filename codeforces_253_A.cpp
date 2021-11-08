#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,i;
    cin >> n >> m;
    char ch1='B',ch2='G';
 
    if(n>=m){
        for(i=1;i<=(n+m);i++){
            if(i%2==1&&i<=2*m){
                cout << ch1;
            }
            if(i%2==0&&i<=2*m){
                cout << ch2;
            }
            if(i>2*m){
                cout << ch1;
            }
        }
        cout << "\n";
    }
    else{
        for(i=1;i<=(n+m);i++){
            if(i%2==1&&i<=2*n){
                cout << ch2;
            }
            if(i%2==0&&i<=2*n){
                cout << ch1;
            }
            if(i>2*n){
                cout << ch2;
            }
        }
        cout << "\n";
    }
    return 0;
}