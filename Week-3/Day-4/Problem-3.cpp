
//https://codeforces.com/contest/1790/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    int a[n+1][n+1];
    map<int,int> mp;

    for(int i=1;i<=n;i++){
        for(int j=1;j<n;j++){
            cin >> a[i][j];
            mp[a[i][1]]++;
        }
    }

    int x=0,first;
    for(auto u:mp){
        if(u.second>x){
            first = u.first;
            x = u.second;
        }
    }

    int j;
    for(int i=1;i<=n;i++){
        if(a[i][1]!=first) j = i;
    }

    cout << first << " ";

    for(int i=1;i<n;i++)
        cout << a[j][i] << " ";

    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}