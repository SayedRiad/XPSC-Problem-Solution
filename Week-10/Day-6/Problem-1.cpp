
//https://codeforces.com/problemset/problem/1821/B

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
    vector<int> v1(n+1),v2(n+1);
    
    for(int i=1;i<=n;i++)   cin >> v1[i];
    for(int i=1;i<=n;i++)   cin >> v2[i];
    
    int l=1, r=n;
    for(int i=1;i<=n;i++){
        if(v1[i]!=v2[i]) {
            l = i;
            break;
        }
    }

    for(int i=n;i>=1;i--){
        if(v1[i]!=v2[i]) {
            r = i;
            break;
        }
    }

    for(int i=l;i>=2;i--){
        if(v2[i]>=v2[i-1]) {
            l = i-1;
        }
        else break;
    }

    for(int i=r;i<n;i++){
        if(v2[i]<=v2[i+1]) {
            r = i+1;
        }
        else break;
    }

    cout << l << " " << r << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}