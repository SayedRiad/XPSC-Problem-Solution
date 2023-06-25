
//https://codeforces.com/contest/1714/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    if(n/10==0) 
        cout << n;
    else{
        int x=9;
        vi ans;
        while(n){
            if(x>n) {
                ans.pb(n);
                break;
            }
            ans.pb(x);
            n-=x;
            x--;
        }
        reverse(ans.begin(),ans.end());
        for(auto digit:ans)
            cout << digit;
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