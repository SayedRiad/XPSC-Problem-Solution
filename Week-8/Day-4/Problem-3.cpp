
//https://codeforces.com/problemset/problem/1492/B

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
    vi v(n),a(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> v[i];
        a[i] = v[i];
        mp[v[i]] = i;
    }
    sort(a.begin(),a.end());
    for(int i=n-1;i>=0;i--){
        if(mp[a[i]]==-1) continue;
        int indx = mp[a[i]];
        for(int j=indx;j<n;j++){
            if(v[j]==-1) break;
            cout << v[j] <<' ';
            v[j] = -1;
            mp[v[j]] = -1;
        }
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