
//https://codeforces.com/contest/1118/problem/B

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
    vi v(n+1);
    ll totalsum = 0,sum1=0,sum2=0;
    for(int i=1;i<=n;i++){
        cin >> v[i];
        totalsum += v[i];
    }
    for(int i=1;i<=n;i++){
        if(i%2==0)
            sum1 += v[i];
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        if(i%2){
            sum2 = totalsum - sum1 - v[i];
        }
        else{
            sum1 = totalsum - sum2 - v[i];
        }
        if(sum1 == sum2) ans++;
    }
    
    cout << ans << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

