
//https://www.codechef.com/problems/BOOKPAGES

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
    int odd=0,even=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i]&1) odd++;
        else even++;
    }   
    if((odd%2==0 and even%2==0) or odd==0 or odd%2==0)
        cout << "YES\n";

    else
        cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}