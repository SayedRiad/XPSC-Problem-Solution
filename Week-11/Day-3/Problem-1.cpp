
//https://acm.timus.ru/problem.aspx?space=1&num=1005

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
    int sum = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }   
    
    int ans = sum;
    for(int i=0;i<(1<<n);i++){
        int x = 0;
        for(int j=0;j<n;j++){
            if((1<<j)&i)
                x += a[j];
        }

        ans = min(ans, abs(sum-2*x));
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