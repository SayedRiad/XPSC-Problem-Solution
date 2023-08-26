
//https://codeforces.com/contest/1862/problem/C

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
    vi a(n+1),b;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    if(a[1]!=n){
        cout << "NO\n";
        return;
    }

    for(int i=n;i>=1;i--){
        while(b.size() < a[i]){
            b.pb(i);
        }
    }

    for(int i=1;i<=n;i++){
        if(a[i] != b[i-1]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}