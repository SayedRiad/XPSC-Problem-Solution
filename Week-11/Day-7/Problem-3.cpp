
//https://codeforces.com/contest/1837/problem/B

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
    string s;               cin >> s;
    int greater = count(s.begin(),s.end(),'>');
    int less = count(s.begin(),s.end(),'<');

    if(greater==n or less==n)
        cout << n+1 << endl;
    else{
        int cnt1=0,cnt2=0,ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='<'){
                cnt2 = 0;
                cnt1++;
            }
            else{
                cnt1 = 0;
                cnt2++;
            }
            int cnt = max(cnt1,cnt2);
            if(cnt>ans)
                ans = cnt;
        }
        cout << ans+1 << endl;
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