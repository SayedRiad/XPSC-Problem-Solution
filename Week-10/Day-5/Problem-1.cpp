
//https://codeforces.com/contest/1591/problem/A

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
    vi v(n);
    for(int i=0;i<n;i++)    cin >> v[i];

    int p = 0, q = 0, ans = 1;
    if(v[0]==1){
        ans += 1;
        p = 1;
    }
    else q = 1;
    for(int i=1;i<n;i++){
        if(v[i]==1 and p==0){
            ans += 1;
            p = 1;
            q = 0;
        }
        else if(v[i]==1 and p==1){
            ans += 5;
            p = 1;
            q = 0;
        }
        else if(v[i]==0 and q==1){
            cout << -1 << endl;
            return;
        }
        else{
            p = 0;
            q = 1;
        }
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