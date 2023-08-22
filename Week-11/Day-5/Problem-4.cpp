
//https://codeforces.com/contest/1849/problem/B

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
    int n,k;                cin >> n >> k;
    vi a(n);
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin >> a[i];
        a[i] %= k;
        if(a[i]==0)
            cout << i+1 << ' ';
        else
            v.pb({a[i], i+1});
    }
    
    sort(v.begin(),v.end(), [&](pair<int,int> p1, pair<int,int> p2){
        if(p1.first==p2.first)
            return p1.second<p2.second;
        return p1.first>p2.first;
    });

    for(auto i:v)
        cout << i.second << ' ';

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