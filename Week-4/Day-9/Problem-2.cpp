
//https://codeforces.com/contest/1702/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    ll n;                  cin>>n;
    vi ans;
    while(n>0){
        int r = n%10;
        if(n/10==0) r--;
        ans.pb(r);
        n/=10;
    }
    reverse(ans.begin(),ans.end());
    int zeros = count(ans.begin(),ans.end(),0);
    if(zeros==ans.size()){
        cout << 0 << endl;
        return;
    }
    bool zero=true;
    for(auto digit:ans){
        if(digit==0 and zero==true) continue;
        cout << digit;
        zero=false;
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