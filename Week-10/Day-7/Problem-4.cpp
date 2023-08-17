
//https://codeforces.com/problemset/problem/1478/A

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
    vi a(n);
    for(int i=0;i<n;i++)    cin >> a[i];
    
    map<int,int> mp;
    set<int> s;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
        s.insert(mp[a[i]]);
    }

    cout << s.size() << endl;    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}