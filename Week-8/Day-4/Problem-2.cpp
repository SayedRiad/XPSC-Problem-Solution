
//https://codeforces.com/problemset/problem/1732/A

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
    vi a(n+1);
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
        
    int gc=a[1];
    for(int i=2;i<=n;i++){
        gc = __gcd(gc,a[i]);
    }
    if(gc==1) cout << 0 << endl;
    else{
        int ans=INT_MAX;
        for(int i=1;i<=n;i++){
            int tem = a[i];
            a[i] = __gcd(i,a[i]);
            int m=a[1];
            for(int j=2;j<=n;j++){
                m = __gcd(m,a[j]);
            }
            if(m==1){
                ans = min(ans,n-i+1);
            }
            a[i] = tem;    
        }
        for(int i=1;i<=n;i++){
            int temi = a[i];
            a[i] = __gcd(a[i],i);
            for(int j=i+1;j<=n;j++){
                int temj = a[j];
                a[j] = __gcd(a[j],j);
                int g = a[1];
                for(int k=2;k<=n;k++){
                    g = __gcd(g,a[k]);
                }
                if(g==1){
                    ans = min(ans,(n-i+1)+(n-j+1));
                }
                a[j] = temj;
            }
            a[i] = temi;
        }
        cout << ans << endl;
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