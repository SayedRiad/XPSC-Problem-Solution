
//https://codeforces.com/contest/1676/problem/H2

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
    int n;                  cin >> n;
    vi v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
        
    pbds<int> p;
    ll ans=0;
    for(int i=0;i<n;i++){
        int less = p.order_of_key(v[i]);
        int greater = p.size()-less;
        ans += greater;
        p.insert(v[i]);
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