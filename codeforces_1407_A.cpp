#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,s1=0,s2=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==1){
                s1++;
            }
            if(a[i]==0){
                s2++;
            }
        }
        if(s2>=s1){
            cout << s2 << "\n";
            for(int i=0;i<s2;i++){
                cout << 0 << " ";
            }
        }
        else{
            if(s1%2==0){
                cout << s1 << "\n";
            }
            else{
                s1--;
                cout << s1 << "\n";
            }
            for(int i=0;i<s1;i++){
                cout << 1 << " ";
            }
        }
        cout << "\n";
    }
    
    return 0;
}