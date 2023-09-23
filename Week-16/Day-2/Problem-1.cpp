
//https://cses.fi/problemset/task/1662

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
    unordered_map<int, int> mp;
    ll sum=0, ans=0;
    mp[0]=1;

    for(int i=0;i<n;i++){
        sum += v[i];
        sum %= n;
        while(sum < 0) {
            sum += n;
        }
        if(mp.find(sum)!=mp.end()){
            ans += mp[sum];
        }
        mp[sum]++;
    }

    cout << ans << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}