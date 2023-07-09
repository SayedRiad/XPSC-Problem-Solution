
//https://codeforces.com/contest/1808/problem/A

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
    int l,r;                  cin >> l>>r;
    int cnt=l,ans=INT_MIN;
    for(int i=l;i<=r;i++){
        string s = to_string(i);
        int mxi=0,mni=10;
        for(int f=0;f<s.size();f++){
            mxi = max(mxi, s[f]-'0');
            mni = min(mni, s[f]-'0');
        }
        
        if(mxi-mni==9){
            cout << i << endl;
            return;
        }
        if(mxi-mni>ans){
            ans = mxi-mni;
            cnt=i;
        }
    }
    
    cout << cnt << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}
