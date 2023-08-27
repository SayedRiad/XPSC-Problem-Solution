
//https://codeforces.com/problemset/problem/1185/C1

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
    int n,m;                  cin >> n >> m;
    vi a(n), pref(n);

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i==0) pref[i] = a[i];
        else pref[i] = pref[i-1]+a[i];
    }

    priority_queue<int> pq;

    for(int i=0;i<n;i++){
        if(pref[i]<=m)
            cout << 0 << ' ';
        else{
            int cnt=0;
            while(!pq.empty()){
                if(pref[i]<=m)
                  break;
                pref[i] -= pq.top();
                pq.pop();
                cnt++;
            }
            while(!pq.empty()) pq.pop();
            for(int k=0;k<i;k++){
                pq.push(a[k]);
            }
            cout << cnt << ' ';
        }
        pq.push(a[i]);
    }
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}