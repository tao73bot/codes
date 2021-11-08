#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m=0,c=0;
    cin >> n;
    while (n--)
    {
        int a,b;
        cin >> a >> b;

        if(a>b){
            m++;
        }
        if(a<b){
            c++;
        }
    }
    if(m==c){
        cout << "Friendship is magic!^^" << endl;
    }
    else if(m>c){
        cout << "Mishka" << endl;
    }
    else if(m<c){
        cout << "Chris" << endl;
    }

    return 0;
}