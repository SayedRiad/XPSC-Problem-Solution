
//https://www.codechef.com/problems/NAS_2523

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
    if(n&1)
        cout << -1 << endl;
    else{
        for(int i=n;i>=1;i--){
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