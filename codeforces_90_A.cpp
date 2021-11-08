#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,t=29,d;
    cin >> a >> b >> c;
    d=max(a,b);
    d=max(d,c);
    if(d%2==0) d/=2;
    else d=(d/2)+1;
    d*=3;
    for(int i=0;i<d;i++){
        if(a+b+c==0) break;
        if(i%3==0){
            if(a==1) a--;
            if(a>=2) a-=2;   
        }
        if(i%3==1){
            if(b==1) b--;
            if(b>=2) b-=2;
        }
        if(i%3==2){
            if(c==1) c--;
            if(c>=2) c-=2;    
        }
        t++;
    }
    cout << t << "\n";
}