
//https://codeforces.com/contest/1791/problem/B

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
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U') y++;
        else if(s[i]=='D') y--;
        else if(s[i]=='R') x++;
        else x--;
        if(x==1 and y==1){
            cout << "YES\n";
            return;
        }
    }
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