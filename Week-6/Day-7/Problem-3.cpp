
//https://www.codechef.com/problems/TENPACKETS

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
    int x,y;                cin >> x >> y;
    int a = 5*x;
    int b = 2*y+x;
    int c = y+3*x;
    cout << min(a, min(b, c)) << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}