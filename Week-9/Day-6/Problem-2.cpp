
//https://codeforces.com/problemset/problem/1428/C

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
    string s;               cin >> s;
    int n = s.size();
    queue<char> q;
    for(int i=1;i<n;i++){
        if(s[i]=='A' and s[i-1]!='0'){
            q.push(s[i-1]);
        }
        else if(s[i]=='B' and s[i-1]!='0'){
            s[i-1] = s[i] = '0';
        }
        else if(s[i]=='B' and s[i-1]=='0' and !q.empty()){
            s[i] = '0';
            q.pop();
        }
    }
    if(s[n-1]!='0' or s[n-1]=='A')
        cout << q.size()+1 << endl;
    else
        cout << q.size() << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}