
//https://codeforces.com/contest/1702/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;               cin >> s;
    int p;                  cin >> p;
    vector<pair<int,int>>v;
    ll sum=0;
    for(int i=0;i<s.size();i++){
        int x = (s[i]-'a'+1);
        sum+=x;
        v.pb({x,i});
    }
    sort(v.rbegin(),v.rend());
    for(auto u:v){
        if(sum<=p) break;
        sum-=u.first;
        s[u.second] = -1;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!=-1){
            cout << s[i];
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

