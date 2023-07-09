
//https://codeforces.com/contest/1213/problem/A

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
    int e=0,o=0;
    for(int i=0;i<n;i++) {
        int x;              cin >> x;
        if(x%2) o++;
        else e++;
    }
    cout << min(e,o) << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

