
//https://codeforces.com/contest/1614/problem/B

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
    vll v(n);
    vector<pair<ll,ll>> p;

    for(int i=0;i<n;i++) {
        cin >> v[i];
        p.pb({v[i], i});
    }

    sort(p.begin(),p.end(),[&](pair<int,int>p1,pair<int,int>p2){
        if(p1.first==p2.first)
            return p1.second < p2.second;
        return p1.first < p2.first;
    });

    int m;
    m = n/2+1;
    vll a(n+1);
    int c=0;
    for(int k=n,i=m-1,j=m+1;k>1;k--){
        if(c==0){
            a[k] = i;
            --i;
            c = 1;
        }
        else {
            a[k] = j;
            ++j;
            c = 0;
        }
    }

    a[0] = m;
    a[1] = n+1;

    ll ans = 0;
    for(int i=1,j=0;i<=n;i++,j++) 
        ans += (2*(abs(m-a[i])))*p[j].first;

    cout << ans << endl;

    vll b(n);

    int i=1;
    for(auto u:p){
        b[u.second] = a[i];
        i++;
    }

    cout << m << ' ';
    for(auto i:b)
        cout << i <<' ';

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