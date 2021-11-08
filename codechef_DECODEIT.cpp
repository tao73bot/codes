#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        cin >> n;
        string s;
        cin >> s;
        for(i=0;i<n;i+=4){
            if(s[i]=='0'){
                if(s[i+1]=='0'){
                    if(s[i+2]=='0'){
                        if(s[i+3]=='0'){
                            cout << "a"; 
                        }
                        else if(s[i+3]=='1'){
                            cout << "b";
                        }
                    }
                    else{
                        if(s[i+3]=='0'){
                            cout << "c";
                        }
                        else if(s[i+3]=='1'){
                            cout << "d";
                        }
                    }
                }
                else if(s[i+1]=='1'){
                    if(s[i+2]=='0'){
                        if(s[i+3]=='0'){
                            cout << "e"; 
                        }
                        else if(s[i+3]=='1'){
                            cout << "f";
                        }
                    }
                    else if(s[i+2]=='1'){
                        if(s[i+3]=='0'){
                            cout << "g";
                        }
                        else if(s[i+3]=='1'){
                            cout << "h";
                        }
                    }
                }
            }
            else if(s[i]=='1'){
                if(s[i+1]=='0'){
                    if(s[i+2]=='0'){
                        if(s[i+3]=='0'){
                            cout << "i"; 
                        }
                        else if(s[i+3]=='1'){
                            cout << "j";
                        }
                    }
                    else if(s[i+2]=='1'){
                        if(s[i+3]=='0'){
                            cout << "k";
                        }
                        else if(s[i+3]=='1'){
                            cout << "l";
                        }
                    }
                }
                else if(s[i+1]=='1'){
                    if(s[i+2]=='0'){
                        if(s[i+3]=='0'){
                            cout << "m"; 
                        }
                        else if(s[i+3]=='1'){
                            cout << "n";
                        }
                    }
                    else if(s[i+2]=='1'){
                        if(s[i+3]=='0'){
                            cout << "o";
                        }
                        else if(s[i+3]=='1'){
                            cout << "p";
                        }
                    }
                }
            }
        }
        cout << "\n";
    }
    return 0;
}