
//https://codeforces.com/contest/1729/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    string s;                  cin >> s;
    int n = s.size();
    vector<pair<char,int>> p;

    char first = min(s[0],s[n-1]);
    char last = max(s[0],s[n-1]);
    for(int i=0;i<n;i++){
        if(s[i]>=first and s[i]<=last){
            p.pb({s[i], i+1});
        }
    }

    sort(p.begin(),p.end(),[&](pair<char,int>p1,pair<char,int>p2){
        return p1.second<p2.second;
    });

    if(p.size()>2){
        sort(p.begin()+1,p.end()-1,[&](pair<char,int>p1,pair<char,int>p2){
            if(s[0]>s[n-1])
                return p1.first>p2.first;
            else
                return p1.first<p2.first;
        });
    }

    int cost = 0;
    vi tiles;
    tiles.pb(1);
    for(int i=1;i<p.size();i++){
        cost += abs(p[i].first - p[i-1].first);
        tiles.pb(p[i].second);
    }

    cout << cost << " " << tiles.size() << endl;
    for(auto u:tiles)
        cout << u << " ";
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

