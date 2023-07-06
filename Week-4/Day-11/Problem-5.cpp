
//https://codeforces.com/contest/1690/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;                cin >>n>>k;
    string s;               cin >>s;
    vector<int> v;
    int w=0;

    for(int i=0,j=0;i<n;i++){
        if(i<k){
            if(s[i]=='W') w++;
        }
        else{
            v.pb(w);
            if(s[j]=='W') --w;
            if(s[i]=='W') ++w;
            ++j;
        }
    }
    v.pb(w);
    sort(v.begin(),v.end());

    cout << v[0] << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

