
//https://codeforces.com/contest/1741/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,sum=0;               cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int ans=n;
    for(int i=0;i<n;i++){
        sum+=v[i];
        int il=0, ml=i+1;
        bool ok=false;
        int sum2=0;
        for(int j=i+1;j<n;j++){
            if(sum2+v[j]>sum) break;
            if(j==n-1 and sum2+v[j]==sum){
                ml=max(il+1,ml);
                ok=true;
                break;
            }
            sum2+=v[j];
            il++;
            if(sum2==sum){
                ml=max(il,ml);
                il=0;
                sum2=0;
            }
        }
        if(ok) ans=min(ans,ml);
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

