
//https://codeforces.com/contest/1845/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int come_together(int a,int b,int c){
    if(b>=a and c>=a)
        return min(b-a, c-a);
    else if(b<=a and c<=a)
        return min(a-b, a-c);
    else
        return 0;
}
 
void solve(){
    int xa,ya;                  cin >> xa >> ya;
    int xb,yb;                  cin >> xb >> yb;
    int xc,yc;                  cin >> xc >> yc;
    
    int ans = come_together(xa,xb,xc) + come_together(ya,yb,yc);
    cout << ans+1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}