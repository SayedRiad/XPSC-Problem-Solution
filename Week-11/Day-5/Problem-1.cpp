
//https://codeforces.com/contest/1858/problem/A

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
    int a,b,c;                  cin >> a >> b >> c;
    if(a>b)
        cout << "First\n";
    else if(a<b)
        cout << "Second\n";
    else{
        if(c&1)
            cout << "First\n";
        else
            cout << "Second\n";
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