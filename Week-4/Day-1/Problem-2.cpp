
//https://www.codechef.com/problems/CS2023_PON

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    ll b;                   cin >> b;
    vector<ll> v(n),ans; 

    for(int i=0;i<n;i++)    cin >> v[i];
    for(int i=0;i<n;i++){
        if((b&v[i])==b) ans.pb(v[i]);
    }

    if(ans.size()==0){
        if(b==0) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(ans.size()==1){
        if(ans[0]==b) cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        ll value = ans[0];
        for(int i=1;i<ans.size();i++){
            value &= ans[i];
        }
        if(value==b) cout << "YES\n";
        else cout << "NO\n";
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

