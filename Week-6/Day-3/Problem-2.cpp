
//https://www.codechef.com/problems/FAVOURITENUM

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
    int a;                  cin >> a;
    if(a%2==0 and a%7==0)
        cout << "Alice\n";
    else if(a&1 and a%9==0)
        cout << "Bob\n";
    else
        cout << "Charlie\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}