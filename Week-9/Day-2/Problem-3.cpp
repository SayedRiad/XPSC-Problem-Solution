
//https://codeforces.com/problemset/problem/1747/B

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
    int cnt=0;
    vector<pair<int,int>> v;
    for(int i=1,j=3*n;i<j;i+=3,j-=3){
        cnt++;
        v.pb({i,j});
    }
    cout << cnt << endl;
    for(auto u:v){
        cout << u.first<<' '<<u.second<< endl;
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