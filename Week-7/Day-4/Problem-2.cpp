
//https://www.codechef.com/problems/BETDEAL

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
    int a,b;    cin >> a>>b;
    int x=100-a, y=200-2*b;
    if(x<y)
        cout << "FIRST\n";
    else if(x>y)
        cout << "SECOND\n";
    else
        cout << "BOTH\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}