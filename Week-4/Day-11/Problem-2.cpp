
//https://codeforces.com/contest/1674/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;          cin >> s;
    int x = (s[0]-'a')*25;
    if(s[0]<s[1])
        cout << x + s[1]-'a' << endl;
    else
        cout << x + s[1]-'a'+1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

