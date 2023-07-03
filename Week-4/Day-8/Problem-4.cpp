
//https://codeforces.com/contest/1714/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,h,m;     cin >> n >> h >> m;
    int ans = INT_MAX;
    while(n--){
        int x,y;   cin >> x >> y;
        int cnt=0;
        int hh = h;
        int mm = m;
        while(1){
            if(hh==x and mm==y) break;
            cnt++;
            mm++;
            if(mm==60){
                mm = 0;
                hh++;
                if(hh==24) hh = 0;
            }
        }
        ans = min(ans, cnt);
    }
    cout << ans/60 << ' ' << ans%60 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}