
//https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll w,h,n;
bool ok(ll x)
{
   return (x/w)*(x/h)>=n;
}

void solve(){
    cin >> w >> h >> n;
    ll l=-1,r=1;
    while(!ok(r)) r*=2;
    while(l<r-1){
      ll mid = l+(r-l)/2;
      if(ok(mid)) r=mid;
      else l=mid;
    }
    cout << r;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}