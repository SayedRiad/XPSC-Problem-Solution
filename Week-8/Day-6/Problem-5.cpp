
//https://codeforces.com/contest/1855/problem/C1

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
    vi v(n+1);
    int mxi=0,indx=0,pos=0,neg=0;
    for(int i=1;i<=n;i++){
        cin >> v[i];
        if(v[i] >= 0) pos++;
        if(v[i] <= 0) neg++;
        if(v[i] > mxi){
            mxi = v[i];
            indx = i;
        }
    }
    if(pos == n){
        cout << n-1 << endl;
        for(int i=2;i<=n;i++){
            cout << i << ' ' << i-1 << endl;
        }
        return;
    }
    if(neg == n){
        cout << n-1 << endl;
        for(int i=n;i>=2;i--){
            cout << i-1 << ' ' << i << endl;
        }
        return;
    }

    vector<pair<int,int>> ans;
    while(v[indx]<=20){
        v[indx] += v[indx];
        ans.pb({indx, indx});
    }

    for(int i=1;i<=n;i++){
        ans.pb({i, indx});
    }

    for(int i=2;i<=n;i++){
        ans.pb({i, i-1});
    }

    cout << ans.size() << endl;
    for(auto u:ans){
        cout << u.first << ' ' << u.second << endl;
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