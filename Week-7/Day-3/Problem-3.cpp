
//https://www.codechef.com/problems/CUTOFF

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
    int n,x;                cin >> n >> x;
    vi v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(),v.end());
    int ans;
    for(int i=n-1;i>=0 and x>0;i--,x--){
        ans=v[i];
    }
    cout << ans-1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}