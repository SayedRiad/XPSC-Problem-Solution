
//https://cses.fi/problemset/task/1619

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
    map<int,int> customers;
    while(n--){
        int a,b;            cin >> a >> b;
        customers[a]++;
        customers[b+1]--;
    }
    int ans=0,sum=0;
    for(auto i:customers){
        sum += i.second;
        ans = max(ans, sum);
    }
    cout << ans << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}