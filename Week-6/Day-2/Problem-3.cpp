
//https://www.codechef.com/problems/BLOBBYVOLLEY

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
    map<char,int> mp;
    for(int i=0;i<n;i++){
        if(i==0 and s[i]=='A')
            mp['a']++;
        else if(s[i]=='A' and s[i-1]=='A')
            mp['a']++;
        else if(s[i]=='B' and s[i-1]=='B' and i>0)
            mp['b']++;
    }
    cout << mp['a'] << ' ' << mp['b'] << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}