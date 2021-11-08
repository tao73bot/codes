#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    double x[3];
    cin >> t;
    while(t--)
    {
        
        int a=0,b=0,c=0,cnt=0;
        for(int i=0;i<3;i++){
            cin >> x[i];
            if(x[i]>50.0&&i==0){
                cnt++;
                a++;
            }
            if(x[i]<0.7&&i==1){
                cnt++;
                b++;
            }
            if(x[i]>5600.0&&i==2){
                cnt++;
                c++;
            }
        }
        
        if(cnt==3){
            cout << "10\n";
        }
        if(cnt==2){
            if(c==0) cout << "9\n";
            if(a==0) cout << "8\n";
            if(b==0) cout << "7\n";
        }
        if(cnt==1) cout << "6\n";
        if(cnt==0) cout << "5\n";
    }
    return 0;
}