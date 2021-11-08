#include <bits/stdc++.h>
using namespace std; 


int findLen(string& A, int n, int k, char ch) 
{ 
    int maxlen = 1; 
    int cnt = 0; 
    int l = 0, r = 0; 
    

    while (r < n) { 

        if (A[r] != ch) 
            ++cnt; 
        while (cnt > k) 
        { 
            if (A[l] != ch) 
                --cnt; 
                ++l; 
        } 
        maxlen = max(maxlen, r - l + 1); 
        ++r; 
    } 
    return maxlen; 
} 


int answer(string& A, int n, int k) 
{ 
    int maxlen = 1; 
    for (int i = 0; i < 26; ++i) { 
        maxlen = max(maxlen, findLen(A, n, k, i+'A')); 
        maxlen = max(maxlen, findLen(A, n, k, i+'a')); 
    } 
    return maxlen; 
} 

int main() 
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n ;
    cin >> k ;
    string A;
    cin >> A; 
    cout << answer(A, n, k) << endl; 

    return 0; 
}