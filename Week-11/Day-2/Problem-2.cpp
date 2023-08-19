
//https://codeforces.com/problemset/problem/1601/A

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
    vi a(n), set_bit(33);
    for(int i=0;i<n;i++)    cin >> a[i];

    for(int i=0;i<=32;i++){
        for(int j=0;j<n;j++){
            if(a[j] & (1<<i))
                set_bit[i]++;
        }
    }

    vi ans;
    for(int i=1;i<=n;i++){
        bool ok=true;
        for(int j=0;j<=32;j++){
            if(set_bit[j]%i != 0){
                ok=false;
                break;
            }
        }

        if(ok) ans.pb(i);
    }

    for(auto i:ans)
        cout << i << ' ';
    
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