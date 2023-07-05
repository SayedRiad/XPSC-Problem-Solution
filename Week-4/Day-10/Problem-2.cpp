
//https://codeforces.com/contest/1690/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    vll s(n),f(n);
    for(int i=0;i<n;i++)    cin >> s[i];
    for(int i=0;i<n;i++)    cin >> f[i];
    cout << f[0]-s[0] <<" ";
    for(int i=1;i<n;i++){
        if(s[i]<f[i-1])
            cout << f[i]-f[i-1] <<" ";
        else
            cout << f[i]-s[i] <<" ";
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

