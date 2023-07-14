
//https://www.codechef.com/problems/DOTIFYPLAY

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
    int n,k,l;              cin >> n >> k >> l;
    map<int, vector<int>> mp;
    for(int i=0;i<n;i++){
        int m,lan;          cin >> m >> lan;
        mp[lan].pb(m);
    }
    priority_queue<int> pq;
    for(int i=0;i<mp[l].size();i++){
        pq.push(mp[l][i]);
    }
    int ans=0;
    while(k-- and !pq.empty()){
        ans += pq.top();
        pq.pop();
    }

    if(ans==0 or k!=-1)
        cout << -1 << endl;
    else
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