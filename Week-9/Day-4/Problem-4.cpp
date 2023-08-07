
//https://codeforces.com/problemset/problem/1619/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;                  cin >> s;
    int len = s.size();
    if(len&1){
        cout << "NO\n";
    }
    else{
        string a,b;
        for(int i=0;i<len/2;i++){
            a.pb(s[i]);
        }
        for(int i=len/2;i<len;i++){
            b.pb(s[i]);
        }
        if(a == b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}