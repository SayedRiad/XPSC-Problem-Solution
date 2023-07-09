
//https://codeforces.com/contest/1272/problem/B

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
    string s,ans;           cin >> s;
    
    int l = count(s.begin(),s.end(),'L');
    int r = count(s.begin(),s.end(),'R');
    int u = count(s.begin(),s.end(),'U');
    int d = count(s.begin(),s.end(),'D');

    int lr = min(l, r);
    int ud = min(u, d);
    int rl = lr, du = ud;

    if((lr>0 and ud==0) or (lr==0 and ud>0)){
        if(lr>0){
            cout << 2 << endl;
            cout << "LR" << endl;
        }
        else{
            cout << 2 << endl;
            cout << "UD" << endl;
        }
        return;
    }
    while(lr--){
        ans.pb('L');
    }
    while(ud--){
        ans.pb('U');
    }
    while(rl--){
        ans.pb('R');
    }
    while(du--){
        ans.pb('D');
    }

    cout << ans.size() << endl;
    cout << ans<< endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

