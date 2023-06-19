
//https://codeforces.com/contest/1790/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,s,r;              cin>>n>>s>>r;
    
    int mxi = s-r;
    cout << mxi << " ";
    for(int i=1;i<n;i++){
        int x = min(mxi,r-(n-i-1));
        cout << x <<" ";
        r -= x;
    }
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

