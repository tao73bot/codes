#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i;
    string name[1009],ip[1009],name_2,ip_2;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> name[i] >> ip[i];
        ip[i]+=";";
    }
    while(m--){
        cin >> name_2 >> ip_2;

        for(int j=0;j<n;j++){
            if(ip_2==ip[j])
            {
                cout << name_2 <<" "<<ip[j]<<" #"<<name[j]<<"\n";
                break;
            }
        }
    }
    return 0;
}