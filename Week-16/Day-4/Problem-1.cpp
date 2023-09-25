
//https://codeforces.com/contest/1879/problem/A

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
    int n,e1,s1;
    cin >> n;
    vi s(n), e(n);
    for(int i=0;i<n;i++){
        int x,y; cin >> x >> y;
        s[i]=x; e[i]=y;
        if(i==0){
            s1=x; e1=y;
        }
    }

    for(int i=1;i<n;i++){
        if(s[i]>=s1 and e[i]>=e1){
            cout << -1 << endl;
            return;
        }
    }
    cout << s1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}