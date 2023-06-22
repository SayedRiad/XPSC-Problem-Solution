
//https://codeforces.com/contest/1741/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    if(n==3) cout << -1 << endl;
    else if(n%2==0){
        for(int i=n;i>=1;i--){
            cout << i << ' ';
        }
        cout << endl;
    }
    else{
        for(int i=n;i>(n/2)+1;i--){
            cout << i << ' ';
        }
        for(int i=1;i<=n-(n/2);i++){
            cout << i << ' ';
        }
        cout << endl;
    }
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

