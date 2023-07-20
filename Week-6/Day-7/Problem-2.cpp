
//https://www.codechef.com/problems/ABPLUSC

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int limit = 1e6;

void solve(){
    ll x;                   cin >> x;
    if(x==1) {
        cout << -1 << endl;
        return;
    }
    else{
        ll y = sqrt(x),a,b,c;
        if(y*y == x){
            a = y - 1;
            b = y - 1;
            c = x - a * b;
        }
        else{
            a = y;
            b = y;
            c = x - a * b;
        }
        if(c > limit){
            while(c > limit){
                a++;
                c = x - a * b;
            }
        }
        cout << a << ' ' << b << ' ' << c << endl;
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