
//https://codeforces.com/contest/1800/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    string s,ans;               cin>>s;
    
    for(int i=0;i<n;i++) s[i] = tolower(s[i]);
    
    for(int i=0;i<n;i++) {
        if(s[i]=='m' or s[i]=='e' or s[i]=='o' or s[i]=='w') continue;
        else{
            cout << "NO\n";
            return;
        }
    }
    
    char ch;
    ch = s[0];
    ans+=s[0];
    for(int i=1;i<n;i++) {
    
        if(s[i]!=ch){
            ans+=s[i];
            ch = s[i];
        }
    }
    
    if(ans=="meow")
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

