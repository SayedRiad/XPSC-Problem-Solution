
//https://codeforces.com/contest/1702/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;                  cin >> s;
    map<char,int> mp;
    int ans=0;
    for(int i=0;i<s.size();i++){
        if(mp[s[i]]!=0)
            continue;
        else{
            mp[s[i]]++;
            if(mp.size()==4){
                ans++;
                --i;
                mp.clear();
            }
        }
        
    }
    if(mp.size()) ans++;
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

