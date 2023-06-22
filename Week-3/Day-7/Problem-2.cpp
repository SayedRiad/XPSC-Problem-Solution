
//https://codeforces.com/contest/1744/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,q,even=0,odd=0;           cin >> n >> q;
    vector<ll> v(n);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum += v[i];
        if(v[i]%2==0) even++;
        else odd++;
    }
    while(q--){
        int x,y;
        cin >> x >> y;
        if(x==0){
            if(y%2==0){
                sum += even*y;
            }
            else{
                sum += even*y;
                odd += even;
                even = 0;
            }
        }
        else{
            if(y%2==0){
                sum += odd*y;
            }
            else{
                sum += odd*y;
                even += odd;
                odd = 0;
            }
        }
        cout << sum << endl;
    }
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

