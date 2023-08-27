
//https://codeforces.com/problemset/problem/1374/C

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
    stack<char> open,close;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            open.push(s[i]);
        }
        else{
            if(!open.empty()){
                open.pop();
            }
            else close.push(s[i]);
        }
    }
    cout << close.size() << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}