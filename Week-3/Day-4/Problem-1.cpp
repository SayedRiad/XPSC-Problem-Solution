
//https://codeforces.com/contest/1790/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s,pi;            cin >> s;

    pi = "314159265358979323846264338327";

    int ans=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==pi[i]) ans++;
        else break;
    }

    cout << ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

