
//https://codeforces.com/contest/1582/problem/A

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
    int a,b,c;              cin >> a >> b >> c;
    int sum = a+2*b+3*c;
    if(sum&1)
        cout << 1 << endl;
    else
        cout << 0 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}