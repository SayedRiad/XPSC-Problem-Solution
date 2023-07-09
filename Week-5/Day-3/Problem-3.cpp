
//https://codeforces.com/contest/1234/problem/A

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
    ll sum=0;
    for(int i=0;i<n;i++){
        int x;              cin >> x;
        sum += x;
    }
    int ans = ceil((double)sum/n);
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

