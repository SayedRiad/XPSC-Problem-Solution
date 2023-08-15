
//https://codeforces.com/contest/1591/problem/B

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
    int mxi = INT_MIN;
    for(int i=0;i<n;i++){
        cin >> v[i]; 
        mxi = max(mxi, v[i]);
    }
    
    if(v[n-1]==mxi){
        cout << 0 << endl;
        return;
    }

    int eversion = 1, val = v[n-1];

    for(int i=n-2;i>0;i--){
        if(v[i]==mxi) break;
        else if(v[i]>val) {
            eversion++;
            val = v[i];
        }
    }

    cout << eversion << endl;
    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}