
//https://www.codechef.com/problems/CHEFODD

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
    ll n,k;                 cin >> n >> k;
    
    if(n&1){
        ll nn = (n/2)+1;
        if(nn&1 and k&1 and k<=nn-1)
            cout << "YES\n";
        else if(nn%2==0 and k%2==0 and k<=nn-1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else{
        ll nn = n/2;
        if(nn&1 and k&1 and k<=nn)
            cout << "YES\n";
        else if(nn%2==0 and k%2==0 and k<=nn)
            cout << "YES\n";
        else
            cout << "NO\n";
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