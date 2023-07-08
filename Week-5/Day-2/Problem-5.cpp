
//https://codeforces.com/contest/1426/problem/C

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
    int n;              cin >> n;
    int x = sqrt(n);
    if(x * x >= n) cout << 2*x - 2 << endl;
    else if((x+1) * x >= n) cout << 2*x - 1 << endl;
    else cout << 2*x << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

