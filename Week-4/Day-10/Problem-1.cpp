
//https://codeforces.com/contest/1690/problem/B

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
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)    cin >> a[i];
    for(int i=0;i<n;i++)    cin >> b[i]; 
    if(n==1){
        if(a[0]<b[0])
            cout << "NO\n";
        else
            cout << "YES\n";
    } 
    else{
        ll z=0,c=0,x=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i]){
                cout << "NO\n";
                return;
            }
            else if(b[i]!=0 and c==0){
                x = a[i]-b[i];
                c = 1;
            }
            else if(b[i]!=0 and c==1 and a[i]-b[i]!=x){
                cout << "NO\n";
                return;
            }
            else if(b[i]==0){
                z = max(z, a[i]-b[i]);
            }
        }
        if(c==1 and z>x){
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
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