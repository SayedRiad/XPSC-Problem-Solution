
//https://codeforces.com/contest/1833/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define vl vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    vl v(n);

    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());

    ll odd=0,even=0,ok1=0,ok2=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0 and ok1==0){
            even = v[i];
            ok1 = 1;
        }
        if(v[i]%2==1 and ok2==0){
            odd = v[i];
            ok2 = 1;
        }
        if(ok1 and ok2) break;
    }
    bool flag=true;
    if(ok1 and ok2){
        for(int i=0;i<n;i++){
            if(v[i]%2==0 and v[i]-odd<=0){
                flag=false;
                break;
            }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "YES\n";

}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

