
//https://codeforces.com/contest/1807/problem/C

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
    string s;               cin >> s;
    map<char,int> mp;
    map<char,int> mp1;
    vector<int> ans(n);
    ans[0]=1;
    mp1[s[0]]=1;
    mp[s[0]]=1;
    for(int i=1;i<n;i++){
        if(mp[s[i]]==0 and ans[i-1]==0) {
            mp[s[i]] = 1;
            ans[i] = 1;
            mp1[s[i]]=1;
        }
        if(mp[s[i]]==0 and ans[i-1]==1) {
            mp[s[i]] = 1;
            ans[i] = 0;
            mp1[s[i]]=0;
        }
        else ans[i] = mp1[s[i]];
    }
    for(int i=1;i<n;i++){
        if(ans[i]==ans[i-1]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}