
//https://www.codechef.com/problems/PARLIAMENT

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
    int n,x;               cin >> n >> x;
    if(n&1){
        if(n/2+1<=x)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    else{
        if(n/2<=x)
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