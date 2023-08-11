
//https://codeforces.com/problemset/problem/817/C?fbclid=IwAR1I_f2IRdlJf_oT6SfzehJDs-6aJQJdKIoI2GR2Swtx_owpa_JcGbHj4bE

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll really_big(ll x,ll y){
    ll l = 1, r = x;
    ll num = -1;
    while(l<=r){
        ll mid = l + (r-l)/2;
        ll m = mid, sum=0;
        while(m){
            sum += (m%10);
            m /= 10;
        }
        if(mid-sum>=y){
            num = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    return num;
}

void solve(){
    ll n,s;                  cin >> n >> s;
    ll nm = really_big(n, s);
    if(nm==-1)
        cout << 0 << endl;
    else
        cout << n-nm+1 << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}