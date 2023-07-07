
//https://codeforces.com/contest/1618/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    vll v(7),ans;
    for(int i=0;i<7;i++)
        cin >> v[i];
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            for(int k=j+1;k<6;k++){
                if(v[i]+v[j]+v[k]==v[6]){
                    ans.pb(v[i]);
                    ans.pb(v[j]);
                    ans.pb(v[k]);
                    break;
                }
            }
        }
    }
    for(auto u:ans)
        cout << u << ' ';
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

