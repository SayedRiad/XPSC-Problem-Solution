
//https://codeforces.com/problemset/problem/1853/B

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
    int n,k;                  cin >> n >> k;
    if(k>30){
        cout << 0 << endl;
        return;
    }
    int ans=0;
    for(int i=0;i<=n;i++){
        int last = n;
        int prev = i;
        bool ok=true;
        for(int j=1;j<=k-2;j++){
            int tmp = last - prev;
            last = prev;
            prev = tmp;
            if(prev>last or prev<0){
                ok=false;
                break;
            }
        }
        if(ok) ans++;
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