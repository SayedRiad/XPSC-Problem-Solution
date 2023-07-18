
//https://www.codechef.com/problems/FOODPLAN

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
    int n,m;                cin >> n >> m;
    double online = n-n*.1;
    if(online > m)
        cout << "DINING\n";
    else if(online < m)
        cout << "ONLINE\n";
    else
        cout << "EITHER\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}