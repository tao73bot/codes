#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        long long l1,r1,l2,r2;
        cin >> l1 >> r1 >> l2 >> r2;

        if(l1!=r2){
            cout <<l1<<" "<<r2<<endl;
        }
        else if(r1!=l2){
            cout <<r1<<" "<<l2<<endl;
        }
        else if(l1!=l2){
            cout <<l1<<" "<<l2<<endl;
        }
        else{
            cout <<r1<<" "<<r2<<endl;
        }
    }

    return 0;
}