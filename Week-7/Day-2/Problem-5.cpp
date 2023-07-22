
//https://www.codechef.com/problems/STRAME

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
    map<int,int> mp;
    
    for(int i=0;i<n;i++){
        if(s[i]=='1')
            mp[1]++;
        else
            mp[0]++; 
    }
    
    int ans = min(mp[0], mp[1]);
    
    if(ans&1)
        cout << "Zlatan\n";
    else
        cout << "Ramos\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}