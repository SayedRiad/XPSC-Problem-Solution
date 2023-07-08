
//https://codeforces.com/contest/1249/problem/A

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
    sort(v.begin(),v.end());
    bool ok=true;
    for(int i=0;i<n-1;i++){
        if(v[i+1]-v[i]==1){
            ok=false;
            break;
        }
    }
    int ans =  ok?1:2;
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

