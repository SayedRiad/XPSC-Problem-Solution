
//https://www.codechef.com/problems/DISTOPPSUMS

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
    int n;                  cin >> n;
    for(int i=n/2;i>=1;i--){
        cout << i << " ";
    }
    for(int j=n/2+1;j<=n;j++){
        cout << j << " ";
    }
    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}