
//https://codeforces.com/contest/1618/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    vector<string> v(n-2);
    string ans;
    for(int i=0;i<n-2;i++){
        cin >> v[i];
    }
    ans+=v[0];
    for(int i=1;i<n-2;i++){
        if(v[i-1][1]==v[i][0])
            ans.pb(v[i][1]);
        else{
            ans.pb(v[i][0]);
            ans.pb(v[i][1]);
        }
    }
    if(ans.size()<n) ans.pb('a');
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

