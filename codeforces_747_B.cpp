#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,c1=0,c2=0,c3=0,c4=0;
    cin >> n;
    string s;
    cin >> s;
    if(n%4!=0){
        cout << "===\n";
        return 0;
    }
    else if(n%4==0){
        int x=n/4;
        for(i=0;i<n;i++){
            if(s[i]=='A'){
                c1++;
            }
            if(s[i]=='G'){
                c2++;
            }
            if(s[i]=='C'){
                c3++;
            }
            if(s[i]=='T') c4++;
        }
        if(c1>x||c2>x||c3>x||c4>x){
            cout << "===\n";
            return 0;
        }
        else if(c1<=x&&c2<=x&&c3<=x&&c4<=x){
            for(i=0;i<n;i++){
                if(c1<x){
                    if(s[i]=='?'){
                        s[i]='A';
                        c1++;
                    }
                }
                if(c2<x){
                    if(s[i]=='?'){
                        s[i]='G';
                        c2++;
                    }
                }
                if(c3<x){
                    if(s[i]=='?'){
                        s[i]='C';
                        c3++;
                    }
                }
                if(c4<x){
                    if(s[i]=='?'){
                        s[i]='T';
                        c4++;
                    }
                }
            }
        }
        for(i=0;i<n;i++){
            cout << s[i];
        }
        cout <<"\n";
    }
    return 0;
}