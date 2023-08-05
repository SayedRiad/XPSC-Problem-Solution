
//https://codeforces.com/problemset/problem/1758/A

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
    string s;                  cin >> s;
    int n = 2*s.size();
    vector<char> pal_str(n);
    for(int i=0,j=n-1;i<s.size();i++,j--){
        pal_str[i] = pal_str[j] = s[i];
    }
    for(int i=0;i<n;i++){
        cout << pal_str[i];
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