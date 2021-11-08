#include <bits/stdc++.h>
using namespace std;
#define SIS std::ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define gelo return 0
#define khela_shuru int main()
#define ll long long

const int Max_Char=26;
void xxx(string s[],int n){
    bool x[Max_Char];
    memset(x,true,sizeof(x));

    for(int i=0;i<n;i++){
        bool y[Max_Char]={false};
        for(int j=0;s[i][j];j++){
            if(x[s[i][j]-'a']) y[s[i][j]-'a']=true;
        }
        memcpy(x ,y , Max_Char);
    }
    string ss;
    for(int i=0;i<26;i++){
        if(x[i]) ss+=(i+'a');
    }
    cout << ss.size() << "\n";
}
void solve()
{
	int n,i;
    cin >> n;
    string s[n];
    for(i=0;i<n;i++){
        cin >> s[i];
    }
    xxx(s,n);
}

khela_shuru
{
	SIS;
	int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
	gelo;
}