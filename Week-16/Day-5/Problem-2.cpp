
//https://codeforces.com/contest/1882/problem/B

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
    int n;
    cin >> n;
    
    vector<int> v[n];
    set<int> s,s2;

    for(int i=0;i<n;i++){
        int x; cin >> x;
        v[i].resize(x);
        for(int j=0;j<x;j++){
            cin >> v[i][j];
            s.insert(v[i][j]);
        }
    }

    int ans=0;
    for(int i=1;i<=50;i++){
        for(int j=0;j<n;j++){
            bool found=false;
            for(int k=0;k<v[j].size();k++){
                if(v[j][k]==i){
                    found=true;
                    break;
                }
            }
            if(!found){
                for(int k=0;k<v[j].size();k++){
                    s2.insert(v[j][k]);
                }
            }
            if(s2.size()!=s.size())
                ans = max(ans, (int)s2.size());
        }
        s2.clear();
    }
    
    cout << ans << endl;
    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}