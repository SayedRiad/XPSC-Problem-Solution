
//https://codeforces.com/contest/1800/problem/D

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
    string s;               cin>>s;

    int ans=0,ok=0;
    for(int i=0;i<n-2;i++) {
        if(s[i]==s[i+2] and ok==0){
            ans++; ok=1;
        }
        else if(s[i]!=s[i+2] and ok==0){
            ans+=2; ok=1;
        }
        else if(s[i]!=s[i+2]){
            ans++;
        }
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

