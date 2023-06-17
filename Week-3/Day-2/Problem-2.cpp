
//https://codeforces.com/contest/1703/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s,ans="yes";
    cin >> s;
    for(int i=0;i<3;i++) s[i] = tolower(s[i]);
    if(s==ans)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    opt();
    int t;                 cin >> t;

    while(t--){
        solve();
    }
    return 0;

}

