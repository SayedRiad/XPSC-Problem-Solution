
//https://www.codechef.com/problems/MONOPOLY2

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
    int p,q,r,s;            cin >>p>>q>>r>>s;
    int pp = q+r+s;
    int qq = p+r+s;
    int rr = p+q+s;
    int ss = p+q+r;
    if(p>pp or q>qq or r>rr or s>ss)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}