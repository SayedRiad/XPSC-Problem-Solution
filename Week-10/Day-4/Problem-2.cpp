
//https://codeforces.com/contest/1604/problem/B

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
    for(int i=0;i<n;i++)    cin >> v[i];

    if(n&1){
        int cnt = 0;
        for(int i=1;i<n;i++){
            if(v[i-1]>=v[i]){
                cnt++; 
                break;
            }
        }
        if(cnt==1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    else
        cout << "YES\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}