
//https://codeforces.com/problemset/problem/1807/B

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
    int esum=0,osum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]&1) osum += a[i];
        else esum += a[i];
    }
    if(esum > osum)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}