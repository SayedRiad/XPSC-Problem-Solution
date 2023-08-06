
//https://codeforces.com/problemset/problem/1822/D

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
    if(n==1){
        cout << 1 << endl;
    }
    else if(n&1){
        cout << -1 << endl;
    }
    else{
        vi a(n+1);
        int x = n;
        for(int i=1;i<=n;i+=2,x-=2){
            a[i] = x;
        }
        x = 1;
        for(int i=2;i<=n;i+=2,x+=2){
            a[i] = x;
        }
        for(int i=1;i<=n;i++)
            cout << a[i] << ' ';
        
        cout << endl;
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