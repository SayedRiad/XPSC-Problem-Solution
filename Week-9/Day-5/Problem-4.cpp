
//https://codeforces.com/problemset/problem/1430/A

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
    if(n==1 or n==2 or n==4)
        cout << -1 << endl;
    else if(n%3 == 0)
        cout << n/3 << ' ' << 0 << ' ' << 0 << endl;
    else if(n%3 == 1)
        cout << (n-7)/3 << ' ' << 0 << ' ' << 1 << endl;
    else 
        cout << (n-5)/3 << ' ' << 1 << ' ' << 0 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}