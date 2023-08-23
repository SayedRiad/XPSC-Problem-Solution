
//https://codeforces.com/problemset/problem/1860/C

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
    vi a(n);
    for(int i=0;i<n;i++)    cin >> a[i];

    int f_min = INT_MAX;
    int s_min = INT_MAX;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i]>f_min and a[i]<s_min){
            ans++;
            s_min = min(s_min, a[i]);
        }
        f_min = min(f_min, a[i]);
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