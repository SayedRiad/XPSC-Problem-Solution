
//https://www.codechef.com/problems/LARGESECOND

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
    vi v(n);
    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=n-2;i>=0;i--){
        if(v[n-1]!=v[i]){
            cout << v[n-1]+v[i] << endl;
            return;
        }
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