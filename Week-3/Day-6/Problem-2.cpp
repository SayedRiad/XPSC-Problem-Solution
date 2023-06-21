
//https://codeforces.com/contest/1800/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<ll>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,k;                cin >> n >> k;
    string s;               cin >> s;
    map<char,int> mpl,mpu;
    
    for(int i=0;i<s.size();i++){
        if(s[i]>='A' and s[i]<='Z')
            mpu[s[i]-'A']++;
        else
            mpl[s[i]-'a']++;
    }

    ll ans=0;
    for(int i=0;i<26;i++){
        if(mpu[i]!=0 or mpl[i]!=0){
            ans += min(mpu[i],mpl[i]);
            int x = (abs(mpu[i]-mpl[i]))/2;
            while(k!=0 and x!=0){
                ans++;
                k--;
                x--;
            }
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

