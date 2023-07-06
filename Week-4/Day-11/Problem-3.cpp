
//https://codeforces.com/contest/1674/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s,t;          cin >> s>>t;
    int x = count(t.begin(),t.end(), 'a');
    if(x==1 and t.size()==1)
        cout << 1 << endl;
    else if((x==t.size() or x>=1) and t.size()>1)
        cout << -1 << endl;
    else{
        ll ans=1;
        int f=s.size();
        while(f--){
            ans*=2;
        }
        cout << ans << endl;
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

