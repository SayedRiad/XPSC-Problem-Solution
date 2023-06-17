
//https://codeforces.com/contest/1692/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                   cin >> n;
    vector<int> v;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;               cin >> x;
        mp[x]++;
    }
    int d=0;
    for(auto u:mp){
        d+=u.second-1;
    }
    int len=n-d;
    if(d%2) len--;
    cout << len << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
