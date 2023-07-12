
//https://codeforces.com/contest/1360/problem/B

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
    vector<int> v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(),v.end());
    int ans=INT_MAX;
    for(int i=0;i<n-1;i++){
        ans = min(ans, abs(v[i]-v[i+1]));
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

