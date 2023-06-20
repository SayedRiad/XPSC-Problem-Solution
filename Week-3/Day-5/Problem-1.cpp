
//https://codeforces.com/contest/1833/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    string s;             cin >> s;
    map<string,int> mp;

    int ans=0;
    for(int i=0;i<n-1;i++){
        string mth = "";
        mth.pb(s[i]);
        mth.pb(s[i+1]);
        if(mp[mth]==0) ans++;
        mp[mth]++;
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

