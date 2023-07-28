
//https://www.codechef.com/problems/CHEFEREN

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
    int n,a,b;                  cin >> n >> a >> b;
    int len=0;
    for(int i=1;i<=n;i++){
        if(i&1) len += b;
        else len += a;
    }
    cout << len << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}