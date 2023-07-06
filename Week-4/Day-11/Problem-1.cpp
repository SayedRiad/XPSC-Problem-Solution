
//https://codeforces.com/contest/1674/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int x,y;                cin >> x >> y;
    
    if(x > y or y%x!=0)
        cout << 0 << ' ' << 0 <<endl;
    
    else
        cout << 1 << ' ' << y/x << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

