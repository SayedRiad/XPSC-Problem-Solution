
//https://codeforces.com/contest/1741/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string a,b;
    cin >> a >> b;
    if(a[a.size()-1]=='S' && b[b.size()-1]=='S'){
        if(a.size()-1>b.size()-1) cout << '<' << endl;
        else if(a.size()-1<b.size()-1) cout << '>' << endl;
        else cout << '=' << endl;
    }
    else if(a[a.size()-1]=='M' && b[b.size()-1]=='M'){
        if(a.size()-1>b.size()-1) cout << '<' << endl;
        else if(a.size()-1<b.size()-1) cout << '>' << endl;
        else cout << '=' << endl;
    }
    else if(a[a.size()-1]=='L' && b[b.size()-1]=='L'){
        if(a.size()-1>b.size()-1) cout << '>' << endl;
        else if(a.size()-1<b.size()-1) cout << '<' << endl;
        else cout << '=' << endl;
    }
    else if(a[a.size()-1]=='M' && b[b.size()-1]=='S') cout << '>' << endl;
    else if(a[a.size()-1]=='S' && b[b.size()-1]=='M') cout << '<' << endl;
    else if(a[a.size()-1]=='L' && b[b.size()-1]=='S') cout << '>' << endl;
    else if(a[a.size()-1]=='S' && b[b.size()-1]=='L') cout << '<' << endl;
    else if(a[a.size()-1]=='L' && b[b.size()-1]=='M') cout << '>' << endl;
    else if(a[a.size()-1]=='M' && b[b.size()-1]=='L') cout << '<' << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

