#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,flag=0;
    cin >> n;
    char s[n][5];

    for(i=0;i<n;i++){
        for(j=0;j<5;j++){
            cin >> s[i][j];
        }
    }
    
    for(i=0;i<n;i++){
        for(j=0;j<4;j++){
            if(s[i][j]=='O'&&s[i][j+1]=='O'){
                flag=1;
                s[i][j]='+';
                s[i][j+1]='+';
                break;
            }
        }
        if(flag==1){
            break;
        }
    }

    if(flag==0){
        cout << "NO\n";
    }
    if(flag==1){
        cout << "YES\n";
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                cout << s[i][j];
            }
            cout << "\n";
        }
        cout << "\n";
    }

    return 0;
}