
//https://codeforces.com/problemset/problem/1832/C

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
    vll a(n);
    for(int i=0;i<n;i++)    cin >> a[i];

    int unq = unique(a.begin(),a.end())-a.begin();

    int ans = unq;
    for(int i=1;i<unq-1;i++){
        if(a[i-1]<a[i] and a[i]<a[i+1])
            ans--;
        else if(a[i-1]>a[i] and a[i]>a[i+1])
            ans--;
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