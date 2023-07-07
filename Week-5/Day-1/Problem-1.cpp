
//https://codeforces.com/contest/1611/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll n;                   cin >> n;
    if(n%2==0)
        cout << 0 << endl;
    else {
        bool ok=true;
        ll m = n;
        while(m>0){
            int r = m%10;
            if(r%2==0) {
                ok=false;
                break;
            }
            m /= 10;
        }
        if(ok)
            cout << -1 << endl;
        else{
            string s = to_string(n);
            if((s[0]-'0')%2==0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
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

