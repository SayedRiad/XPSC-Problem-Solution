
//https://codeforces.com/contest/1843/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    vi v(n);
    ll sum=0;
    for(int i=0;i<n;i++){ 
        cin >> v[i];
        sum+=abs(v[i]);
    }
    
    ll ans=0,x=0;
    for(int i=0;i<n;i++){
        if(v[i]<0 and x==0) {
            ans++;
            x=1;
        }
        else if(v[i]>0) x=0;
    }
    cout << sum << " "<<ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}