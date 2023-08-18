
//https://codeforces.com/problemset/problem/1420/B

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
    vll a(n);
   
    for(int i=0;i<n;i++){    
        cin >> a[i];
    }

    map<ll,bool> mp;
    ll ans=0;
    for(int i=31;i>=0;i--){
        ll cnt=0;

        for(int j=0;j<n;j++){
            if((a[j]&(1<<i)) and !mp[j]){
                cnt++;
            }
        }

        if(cnt){
            for(int j=0;j<n;j++){
                if((a[j]&(1<<i)) and !mp[j]){
                    mp[j] = 1;
                }
            }
    
            ans += (cnt*(cnt-1))/2;
        }
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