
//https://codeforces.com/problemset/problem/1806/B

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
    int zero=0,pos=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]==0) zero++;
        else pos++;
    }
    int ans;
    if(zero==0) ans=0;
    else if(pos>=zero-1) ans=0;
    else{
        int mxi = *max_element(v.begin(),v.end());
        if(mxi==1) ans=2;
        else ans=1;
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