
//https://codeforces.com/contest/1759/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll l,r,x,a,b;
    cin >> l >> r >> x >> a >> b;
 
    if(a==b){
        cout << 0 << endl;
    }
 
    else if(abs(a-b)>=x){
        cout << 1 << endl;
    }
 
    else if(b>a){
        if(b+x<=r or a-x>=l){
            cout << 2 << endl;
        }else if(a+x<=r and b-l>=x){
            cout << 3 << endl;
        }else{
            cout << -1 << endl;
        }
    }
    
    else{
        if(a+x<=r or b-x>=l){
            cout << 2 << endl;
        }else if(a-x>=l and r-b>=x){
            cout << 3 << endl;
        }else{
            cout << -1 << endl;
        }
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

