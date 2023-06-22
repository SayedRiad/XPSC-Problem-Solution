
//https://codeforces.com/contest/1744/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,c=0;               cin >> n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin >> v[i];

    string s;                cin >> s;

    for(int i=0;i<n;i++){
        int m = v[i];
        char ch = s[i];
        for(int j=i+1;j<n;j++){
            if(v[j]==m and s[j]!=ch){
                c=1;break;
            }
        }
    }

    if(c) cout << "NO\n";
    else cout << "YES\n";
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

