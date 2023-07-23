
//https://www.codechef.com/problems/BITEQU

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
    ll n;                   cin >> n;
    ll a=1, b=2;
    if(n==0){
        cout <<2<<' '<<3<<' '<<4<<' '<<6<<endl;
        return;
    }
    for(ll c=3;c<=100000;c++){
        ll d = c ^ n;
        if(d>2 and d!=c){
            cout <<a<<' '<<b<<' '<<c<<' '<<d<<endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}