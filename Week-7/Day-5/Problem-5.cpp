
//https://www.codechef.com/problems/SUMPERM

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
    vi v(n);
    if(n&1){
        cout << -1 << endl;
        return;
    }
    for(int i=0;i<n;i+=2){
        v[i] = i+2;
    }
    for(int i=1;i<n;i+=2){
        v[i] = i;
    }
    for(int i=0;i<n;i++){
        cout << v[i] <<' ';
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