#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,l,a,b,c,d;
        a=b=c=d=0;
        cin >> x >> y;
        string s;
        cin >> s;
        l=s.size();
        for(int i=0;i<l;i++){
            /*if(s[i]=='U') a++;
            if(s[i]=='D') b++;
            if(s[i]=='R') c++;
            if(s[i]=='L') d++;*/
            if(x>0){
                if(s[i]=='R') a++;
            }
            if(x<0){
                if(s[i]=='L') a--;
            }
            if(y>0){
                if(s[i]=='U') b++;
            }
            if(y<0){
                if(s[i]=='D') b--;
            }
        }
        if(fabs(a)>=fabs(x)&&fabs(b)>=fabs(y)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
        /*if(x>0&&y>0){
            if(c>=x&&a>=y){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        if(x>0&&y<0){
            if(c>=x&&b>=fabs(y)){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        if(x<0&&y>0){
            if(d>=fabs(x)&&a>=y){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }
        if(x<0&&y<0){
            if(d>=fabs(x)&&b>=fabs(y)){
                cout << "YES\n";
            }
            else cout << "NO\n";
        }*/
    }
    return 0;
}