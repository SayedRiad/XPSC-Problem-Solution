
//https://codeforces.com/problemset/problem/1713/B

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
    int n,j,max=0;          cin >> n;
    vi a(n);
    for(int i=0;i<n;i++)    cin >> a[i];
 
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max = a[i];
            j = i;
        }
    }
 
    for(int i=j-1;i>=0;i--){
        if(a[i]>a[i+1]){
            cout << "NO" << endl;
            return;
        }
    }

    for(int i=j+1;i<n;i++){
        if(a[i]>a[i-1]){
            cout << "NO" << endl;
            return;
        }
    }
    
    cout << "YES" << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}