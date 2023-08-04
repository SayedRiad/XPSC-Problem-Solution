
//https://codeforces.com/contest/845/problem/C

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
    int n;                  cin >> n;
    map<ll,int> shows;
    while(n--){
        ll l,r;             cin >> l >> r;
        shows[l]++;
        shows[r+1]--;
    }
    ll sum=0;
    for(auto i:shows){
        sum += i.second;
        if(sum > 2){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}