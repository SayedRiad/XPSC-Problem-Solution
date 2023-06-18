
//https://codeforces.com/problemset/problem/1669/E

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    vector<string> v(n);
    map<char,int> f,s;
    map<string,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        f[v[i][0]]++;
        s[v[i][1]]++;
        mp[v[i]]++;
    }

    ll ans=0;
    for(int i=0;i<n;i++){
        int x = mp[v[i]];
        if(x>0) --x;
        ans+=f[v[i][0]]+s[v[i][1]]-2-(x*2);
        mp[v[i]]--;
        f[v[i][0]]--;
        s[v[i][1]]--;
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


