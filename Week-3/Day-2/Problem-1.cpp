
//https://codeforces.com/contest/1692/problem/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve(){
    //int n;              cin >> n;

    vector<int> v(4);
    int cnt=0;
    for(int i=0;i<4;i++){
        cin >> v[i];
        if(v[i]>v[0]) cnt++;
    }

    cout << cnt << endl;
}

int main(){
    opt();
    int t;                 cin >> t;

    while(t--){
        solve();
    }
    return 0;

}

