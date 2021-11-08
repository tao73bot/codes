#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int a[5];
    int k,i;
    for(i=0;i<5;i++){
        cin >> a[i];
    }
    cin >> k;
    string s;
    while(k--)
    {
        cin >> s;
        if(s=="S"){
            if(a[0]>0){
                cout << "S\n";
                a[0]--;
            }
            else if(a[1]>0){
                cout << "M\n";
                a[1]--;
            }
            else if(a[2]>0){
                cout << "L\n";
                a[2]--;
            }
            else if(a[3]>0){
                cout << "XL\n";
                a[3]--;
            }
            else if(a[4]>0){
                cout << "XXL\n";
                a[4]--;
            }
        }
        else if(s=="M"){
            if(a[1]>0){
                cout << "M\n";
                a[1]--;
            }
            else if(a[2]>0){
                cout << "L\n";
                a[2]--;
            }
            else if(a[0]>0){
                cout << "S\n";
                a[0]--;
            }
            else if(a[3]>0){
                cout << "XL\n";
                a[3]--;
            }
            else if(a[4]>0){
                cout << "XXL\n";
                a[4]--;
            }
        }
        else if(s=="L"){
            if(a[2]>0){
                cout << "L\n";
                a[2]--;
            }
            else if(a[3]>0){
                cout << "XL\n";
                a[3]--;
            }
            else if(a[1]>0){
                cout << "M\n";
                a[1]--;
            }
            else if(a[4]>0){
                cout << "XXL\n";
                a[4]--;
            }
            else if(a[0]>0){
                cout << "S\n";
                a[0]--;
            }
        }
        else if(s=="XL"){
            if(a[3]>0){
                cout << "XL\n";
                a[3]--;
            }
            else if(a[4]>0){
                cout << "XXL\n";
                a[4]--;
            }
            else if(a[2]>0){
                cout << "L\n";
                a[2]--;
            }
            else if(a[1]>0){
                cout << "M\n";
                a[1]--;
            }
            else if(a[0]>0){
                cout << "S\n";
                a[0]--;
            }
        }
        else if(s=="XXL"){
            if(a[4]>0){
                cout << "XXL\n";
                a[4]--;
            }
            else if(a[3]>0){
                cout << "XL\n";
                a[3]--;
            }
            else if(a[2]>0){
                cout << "L\n";
                a[2]--;
            }
            else if(a[1]>0){
                cout << "M\n";
                a[1]--;
            }
            else if(a[0]>0){
                cout << "S\n";
                a[0]--;
            }
        }
    }
    return 0;
}