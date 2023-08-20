
//https://codeforces.com/contest/1858/problem/B

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
    int n,m,d;              cin >> n >> m >> d;
    vi s(m+2);
    for(int i=1;i<=m;i++)   cin >> s[i];

    s[0] = -d+1;
    s[m+1] = n+1;

    int cokies = 0;
    for(int i=1;i<=m+1;i++){
        cokies += (s[i]-s[i-1]-1)/d;
    }

    int ans = n, cnt = 0;
    for(int i=1;i<=m;i++){
        int new_ans = cokies;
        new_ans -= (s[i]-s[i-1]-1)/d;
        new_ans -= (s[i+1]-s[i]-1)/d;
        new_ans += (s[i+1]-s[i-1]-1)/d;
        new_ans += m-1;
        if(new_ans < ans){
            ans = new_ans;
            cnt = 1;
        }
        else if(new_ans == ans){
            cnt++;
        }
    }

    cout << ans << ' ' << cnt << endl;
    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}