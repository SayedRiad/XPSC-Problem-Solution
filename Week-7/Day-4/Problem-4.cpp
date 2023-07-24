
//https://www.codechef.com/problems/PRIMEFACT

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
    ll x,y,z;                 cin >> x >> y;
    if(x%2==0){
        y -= (x+2);
        cout << (y+2-1)/2 + 1 << endl;
    }
    else if(x==3 or x==9){
        y -= (x+3);
        cout << (y+2-1)/2 + 1 << endl;
    }
    else if(x==5){
        y -= (x+5);
        cout << (y+2-1)/2 + 1 << endl;
    }
    else if(x==7){
        y -= (x+7);
        cout << (y+2-1)/2 + 1 << endl;
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