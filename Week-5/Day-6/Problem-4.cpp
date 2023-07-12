
//https://codeforces.com/contest/1399/problem/C

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
    vi v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int ans = 0;
    for(int s=1;s<=100;s++){
        int cnt = 0;
        for(int i=0,j=n-1;i<j;){
            if(v[i]+v[j]==s) {
                cnt++;
                i++, j--;
            }
            else if(v[i]+v[j]>s) j--;
            else i++;
        }
        ans = max(ans, cnt);
    }
    
    cout << ans << endl;

}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

