
//https://codeforces.com/contest/1837/problem/C

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
    queue<int> q;
    char ch='x';
    int n = s.size();

    for(int i=0;i<n;i++){
        if(s[i]=='?')
            q.push(i);
        else{
            ch = s[i];
            while(!q.empty()){
                s[q.front()] = ch;
                q.pop();
            }
        }
    }

    if(ch=='x') ch = '0';

    while(!q.empty()){
        s[q.front()] = ch;
        q.pop();
    }
    cout << s << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}