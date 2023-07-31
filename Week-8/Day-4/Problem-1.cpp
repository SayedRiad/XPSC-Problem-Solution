
//https://codeforces.com/problemset/problem/1766/B

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
    int n,k,i,j;                cin >> n;
    string s;                   cin >> s;
    bool ok = false;
    for(int i=0;i<s.size()-1;i++){
        for(int j=i+2;j<s.size()-1;j++){
            if(s[i]==s[j] and s[i+1]==s[j+1]){
                ok = true;break;
            }
        }
    }
    if(ok==false) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}