
//https://codeforces.com/problemset/problem/1857/D

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
    int n;                  cin >> n;
    vi a(n), b(n);

    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<n;i++)    cin >> b[i];

    vector<pair<int,int>> c;

    for(int i=0;i<n;i++){
        c.pb({a[i]-b[i], i+1});
    }

    sort(c.begin(),c.end());

    set<int> ans;

    for(int i=n-1;i>=0;i--){
        if(c[i].first==c[n-1].first)
            ans.insert(c[i].second);
        else
            break;
    }

    cout << ans.size() << endl;

    for(auto i:ans)
        cout << i << ' ';

    cout << endl;
    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}