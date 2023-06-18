
//https://atcoder.jp/contests/abc121/tasks/abc121_d?lang=en

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll a,b;                 cin >> a >> b;

    if(a%2 and b%2){
        ll x = (b - a)/2;
        if(x%2)
            cout << (a^1);
        else
            cout << a;
    }
    else if(a%2 and b%2==0){
        ll y = (b - a - 1)/2;
        if(y%2) cout << ((a^1)^b);
        else cout << (a^b);
    }

    else if(a%2==0 and b%2==0){
        ll z = (b - a)/2;
        if(z%2)
            cout << (1^b);
        else
            cout << b;
    }
    else{
        ll w = (b - a + 1)/2;
        if(w%2)
            cout << 1;
        else
            cout << 0;
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


