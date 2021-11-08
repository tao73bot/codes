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
        int a[5],cnt=0;
        for(int i=0;i<5;i++){
            cin >> a[i];
            if(a[i]==1) cnt++;
        }
        if(cnt==0){
            cout << "Beginner\n";
        }
        if(cnt==1){
            cout << "Junior Developer\n";
        }
        if(cnt==2){
            cout << "Middle Developer\n";
        }
        if(cnt==3){
            cout << "Senior Developer\n";
        }
        if(cnt==4){
            cout << "Hacker\n";
        }
        if(cnt==5){
            cout << "Jeff Dean\n";
        }
    }
    return 0;
}