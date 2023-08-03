
//https://codeforces.com/contest/1791/problem/D

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
    int n;                cin >> n;
    string s;             cin >> s;
    set<char> s1,s2;
    vector<int> v1,v2;
 
    for(int i=0;i<s.size();i++){
        s1.insert(s[i]);
        v1.pb(s1.size());
    }
    for(int i=s.size()-1;i>=0;i--){
        s2.insert(s[i]);
        v2.pb(s2.size());
    }
    reverse(v2.begin(),v2.end());
    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans = max(ans,v1[i]+v2[i+1]);
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