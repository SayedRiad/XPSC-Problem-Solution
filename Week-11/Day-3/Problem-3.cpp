
//https://codeforces.com/contest/1859/problem/C

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
    vi a(n);
    
    for(int i=0;i<n;i++){
        a[i] = i+1;
    }

    int ans = 0;
    for(int i=0;i<n-1;i++){
        vi tmp = a;

        reverse(tmp.begin()+i,tmp.end());

        int sum = 0, mxi = 0;
        for(int j=0;j<n;j++){
            sum += tmp[j]*(j+1);
            mxi = max(mxi, tmp[j]*(j+1));
        }

        ans = max(ans, sum-mxi);
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