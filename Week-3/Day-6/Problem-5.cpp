
//https://codeforces.com/contest/1759/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int m,s;                cin >> m >> s;
    vector<int> v(100,0),v1;

    for(int i=1;i<=m;i++){
        int x;              cin >> x;
        v[x] = 1;
        v1.pb(x);
    }
   
    for(int i=1;i<=s;i++){
        if(v[i]==0){
            v[i] = 1;
            s-=i;
            v1.pb(i);
        }
    }

    sort(v1.begin(),v1.end());

    int flag=1;
    for(int i=1;i<=v1.back();i++){
        if(v[i]==0){
            flag=0;
            break;
        }
    }

    if(flag and s==0) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

