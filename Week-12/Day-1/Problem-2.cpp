
//https://codeforces.com/problemset/problem/230/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll mxi = 1000000;
bool p[1000001];
void seive(){
    p[0] = p[1] = 1;
    for(int i=2;i*i<=mxi;i++){
        if(p[i]==0){
            for(int j=i*i;j<=mxi;j+=i) p[j] = 1;
        }
    }
}

void solve(){
    seive();
    ll n;
    cin >> n;

    while(n--){
        ll a;
        cin >> a;
        ll b = sqrt(a);
        if(p[b]==0 and b*b==a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}