
//https://codeforces.com/problemset/problem/749/A

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

    if(n&1){
        n -= 3;
        int l = n/2;
        cout << l+1 << endl;
        while(l--){
            cout << 2 << ' ';
        }
        cout << 3;
    }

    else{
        int l = n/2;
        cout << l << endl;
        while(l--){
            cout << 2 << ' ';
        }
    }
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}