
//https://codeforces.com/problemset/problem/1427/A

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
    vi v(n),a,b;
    int sum=0,neg=0,pos=0,zero=0;
    for(int i=0;i<n;i++){
        cin >> v[i];
        sum += v[i];
        if(v[i] < 0) {
            neg += abs(v[i]);
            a.pb(v[i]);
        }
        else if(v[i] > 0) {
            pos += v[i];
            b.pb(v[i]);
        }
        else zero++;
    }

    if(sum == 0){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    if(pos > neg){
        for(auto u:b)
            cout << u << ' ';
        for(auto u:a)
            cout << u << ' ';
        while(zero--){
            cout << 0 << ' ';
        }
    }
    else{
        for(auto u:a)
            cout << u << ' ';
        for(auto u:b)
            cout << u << ' ';
        while(zero--){
            cout << 0 << ' ';
        }
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