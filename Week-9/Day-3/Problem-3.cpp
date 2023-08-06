
//https://codeforces.com/problemset/problem/1722/A

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
    if(n>5){
        cout << "NO\n";
    }
    else{
        map<char,int> mp;
        for(int i=0;i<n;i++){
            if(s[i]=='T') mp['T']=1;
            if(s[i]=='i') mp['i']=1;
            if(s[i]=='m') mp['m']=1;
            if(s[i]=='u') mp['u']=1;
            if(s[i]=='r') mp['r']=1;
        }
        if(mp['T']==1 and mp['i']==1 and mp['m']==1 and mp['u']==1 and mp['r']==1)
            cout << "YES\n";
        else
            cout << "NO\n";
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