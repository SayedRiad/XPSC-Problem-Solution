
//https://codeforces.com/problemset/problem/879/B

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
    ll n,k;                  cin >> n >> k;
    deque<int> dq;
    map<int,ll> mp;
    int mxi=INT_MIN;
    for(int i=0;i<n;i++){
        int x;               cin >> x;
        if(x > mxi){
            mxi = x;
        }
        dq.push_back(x);
    }
    
    if(k <= n-1){
        while(1){
            int y = dq.front();
            dq.pop_front();
            int z = dq.front();
            dq.pop_front();
            if(y > z){
                mp[y]++;
                dq.push_front(y);
                dq.push_back(z);
            }
            else{
                mp[z]++;
                dq.push_front(z);
                dq.push_back(y);
            }
            if(mp[y] == k){
                cout << y << endl;
                return;
            }
            if(mp[z] == k){
                cout << z << endl;
                return;
            }
        }
    }

    else
        cout << mxi << endl;

}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}