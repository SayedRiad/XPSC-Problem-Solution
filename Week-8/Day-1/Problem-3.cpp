
//https://www.codechef.com/problems/XOR_ORDER

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
    int ans=0;
    for (int i=29;i>=0;i--) {
        int x = (1<<i)^a;
        int y = (1<<i)^b;
        int z = (1<<i)^c;
        if(x<y and y<z) {
            a = x; b = y; c = z;
            ans ^= (1<<i);
            break;
        } 
        else if(x<min(y,z) or max(x,y)<z) {
            a = x; b = y; c = z;
            ans ^= (1<<i);
        }
    }

    if (a<b and b<c) 
        cout << ans << endl;
    else 
        cout << -1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}