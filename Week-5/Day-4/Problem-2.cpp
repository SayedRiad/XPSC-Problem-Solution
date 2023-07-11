
//https://codeforces.com/contest/1669/problem/G

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
    int n,m;                  cin >> n>>m;
    vector<string> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    
    for(int k=1;k<n;k++){
        for(int i=n-2;i>=0;i--){
            for(int j=0;j<m;j++){
                if(v[i][j]=='*' and v[i+1][j]=='.')
                    swap(v[i][j], v[i+1][j]);
            }
        }
    }
    for(auto u:v){
        cout <<u<<endl;
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

