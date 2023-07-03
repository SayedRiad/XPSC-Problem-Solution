
//https://codeforces.com/contest/1729/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll a,b,c;                  cin>>a>>b>>c;
   
    ll f = abs(a-1);
    ll s = abs(b-c)+(c-1);
    if(f<s)
        cout << 1 << endl;
    else if(f>s)
        cout << 2 << endl;
    else
        cout << 3 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}