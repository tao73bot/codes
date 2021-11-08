#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define ll long long
#define gelo return 0
#define khela_shuru int main()

khela_shuru
{
	SIS;
	int t;
	cin >> t;
	while(t--)
	{
		int n,i,j,a,aa,b,bb,f=0;
        cin >> n;
        char s[n][n];
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cin >> s[i][j];
                if(s[i][j]=='*'&&f==0){
                    a=i;
                    aa=j;
                    f++;
                }
                if(s[i][j]=='*'&&f==1){
                    b=i;
                    bb=j;
                }
            }
        }
        if(a==b){
            if(a!=n-1){
                s[a+1][aa]='*';
                s[b+1][bb]='*';
            }
            if(a==n-1){
                s[a-1][aa]='*';
                s[b-1][bb]='*';
            }
        }
        if(aa==bb){
            if(aa==n-1){
                s[a][aa-1]='*';
                s[b][bb-1]='*';
            }
            if(aa<n-1){
                s[a][aa+1]='*';
                s[b][bb+1]='*';
            }
        }
        if((a!=b)&&(aa!=bb)){
            s[a][bb]='*';
            s[b][aa]='*';
        }
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout << s[i][j];
            }
            cout << "\n";
        }
	}
	gelo;
}