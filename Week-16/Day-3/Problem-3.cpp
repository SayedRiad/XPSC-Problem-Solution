
//https://cses.fi/problemset/task/1071

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
    ll a, b;                    cin >> a >> b;
    if(a<b){
        if (b%2 == 1){
            ll x = b*b;
            cout << x-a+1 << endl;
        }
        else{
            ll x = (b-1)*(b-1)+1;
            cout << x+a-1 << endl;
        }
    }

    else{
        if (a%2 == 0){
            ll x = a*a;
            cout << x-b+1 << endl;
        }
        else{
            ll x = (a-1)*(a-1)+1;
            cout << x+b-1 << endl;
        }
    }
}

int main(){
    opt();
    int t=1;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}