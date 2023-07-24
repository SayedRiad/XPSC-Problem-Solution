
//https://www.codechef.com/problems/ONEORTWO

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
    ll x,y;                 cin >> x >> y;
    if(x > y){
        if(x-y==1 and y%2==0)
            cout << "CHEFINA\n";
        else
            cout << "CHEF\n";
    }
    else if(x < y){
        if(y-x==1 and x&1)
            cout << "CHEF\n";
        else
            cout << "CHEFINA\n";
    }
    else if(x == y){
        if(x&1)
            cout << "CHEF\n";
        else
            cout << "CHEFINA\n";
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