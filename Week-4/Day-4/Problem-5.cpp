
//https://codeforces.com/contest/1744/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    vi v(n);
    map<int,char> mp;
    for(int i=0;i<n;i++)    cin >> v[i];
    string s;               cin >> s;
    for(int i=0;i<n;i++){
        if(mp[v[i]]==0)
            mp[v[i]] = s[i];
        else{
            if(mp[v[i]]!=s[i]){
                cout << "NO\n";
                return;
            }
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

