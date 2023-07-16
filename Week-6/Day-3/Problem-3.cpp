
//https://www.codechef.com/problems/PRINTINGBIN

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
    vi a(n);
    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[i]==0) 
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
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