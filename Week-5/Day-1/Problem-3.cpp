
//https://codeforces.com/contest/1618/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    vector<ll> a(n);
    
    for(int i=0;i<n;i++){ 
        cin >> a[i];
    }
    
    ll ogcd=a[0],egcd=a[1];
    for(int i=2;i<n;i+=2)
        ogcd = __gcd(ogcd, a[i]);
    for(int i=3;i<n;i+=2)
        egcd = __gcd(egcd, a[i]);
        
    for(int i=1;i<n;i+=2){
        if(a[i]%ogcd==0){
            ogcd=0;
            break;
        }
    }
    
    for(int i=0;i<n;i+=2){
        if(a[i]%egcd==0){
            egcd=0;
            break;
        }
    }
    
    cout << max(ogcd,egcd)<<endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}