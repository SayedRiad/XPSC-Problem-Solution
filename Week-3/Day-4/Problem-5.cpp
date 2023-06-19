
//https://codeforces.com/contest/1772/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;               cin >>k>>n;
    set<int>s;
    vector<int>v;

    for(int i=1,j=0;i<=n;i+=j){
        j++;
        v.pb(i);
    }
    
    for(auto u:v){
        s.insert(u);
        if(s.size()==k) break;
    }
 
    if(k==s.size())
        for(auto u:s) cout <<u<<" ";
 
    else{
        int m=k-s.size();
        while(m--){
            bool ok=true;
            while(ok){
                if(!s.count(n)){ 
                    s.insert(n);
                    ok=false;
                }
                n--;
            }
        }
        for(auto u:s) cout <<u<<" ";
    }
    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

