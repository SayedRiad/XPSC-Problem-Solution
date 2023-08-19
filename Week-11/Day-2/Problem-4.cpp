
//https://codeforces.com/contest/1858/problem/C

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
    
    cout << 1 << ' ';
    map<int,int> mp;
    for(int i=2;i<=n/2;i++){
        int m = i;
        while(m<=n){
            if(mp[m]==0)
                cout << m << ' ';
            mp[m] = 1;
            m *= 2;
        }
    }

    for(int i=2;i<=n;i++){
        if(mp[i]==0)
            cout << i << ' ';
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