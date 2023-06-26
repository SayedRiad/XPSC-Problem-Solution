
//https://codeforces.com/contest/1772/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;                  cin>>k>>n;
    vi v;
    set<int> s;
    for(int i=1,j=0;i<=n;i+=j){
        j++;
        v.pb(i);
    }
    for(auto u:v){
        s.insert(u);
        if(s.size()==k) break;
    }
    if(s.size()==k){
        for(auto u:s)
            cout << u << " ";
        cout << endl;
    }
    else{
        while(s.size()!=k){
            if(s.count(n)) --n;
            else{
                s.insert(n);--n;
            }
        }
        for(auto u:s)
            cout << u << " ";
        cout << endl;
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

