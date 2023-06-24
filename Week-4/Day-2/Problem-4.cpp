
//https://codeforces.com/contest/1843/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vl vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N = 1e6+5;
vector<int> adj[N];
vl leafs;

void dfs(int child, int parent){
    bool ok = false;
    for(auto adj_node:adj[child]){
        if(adj_node == parent) continue;
        ok = true;
        dfs(adj_node, child);
        leafs[child] += leafs[adj_node];
    }
    if(!ok) leafs[child] = 1;
}

void solve(){
    int n;                  cin >> n;
    for(int i=0;i<=n;i++){
        adj[i].clear();
    }
    leafs.assign(n+1, 0);
    for(int i=1;i<n;i++){
        int u,v;            cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    
    dfs(1, -1);
    int q;                  cin >> q;
    while(q--){
        int x,y;            cin >> x >> y;
        cout << leafs[x]*leafs[y] << endl;
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

