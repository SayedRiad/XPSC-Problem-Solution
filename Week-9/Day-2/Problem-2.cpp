
//https://codeforces.com/problemset/problem/1770/B

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
    int n,k;                  cin >> n >> k;
    if(k==1 or k==n){
        for(int i=1;i<=n;i++){
            cout << i << ' ';
        }
    }
    else{
        int x=1;
        for(int i=n,j=1;i>=j;){
            if(x&1){
                cout << i << ' ';
                i--;
                x=2;
            }
            else{
                cout << j << ' ';
                j++;
                x=1;
            }
        }
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