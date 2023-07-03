
//https://codeforces.com/contest/1729/problem/B

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
    string s;               cin>>s;
    string ans;
    for(int i=0;i<n;i++){
        if(n-i>=4 and s[i+2]=='0' and s[i+3]=='0'){
            char ch = char((s[i]-1-'0')+'a');
            ans.pb(ch);
        }
        else if(n-i>=3 and s[i+2]=='0'){
            int x = (s[i]-'0')*10;
            int y = (s[i+1]-'0');
            char ch = char((x+y-1)+'a');
            ans.pb(ch);
            i+=2;
        }
        else{
            char ch = char((s[i]-1-'0')+'a');
            ans.pb(ch);
        }
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