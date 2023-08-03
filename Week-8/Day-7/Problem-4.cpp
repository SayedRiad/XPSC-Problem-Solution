
//https://codeforces.com/contest/1791/problem/C

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
    int ans=0;
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(i==j) ans = 1;
        if(s[i] == s[j]) {
            ans = j - i + 1;
            break;
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