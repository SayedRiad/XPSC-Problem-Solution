
//https://codeforces.com/contest/1692/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n=9,m=9;

    vector<vector<char>> v(n, vector<char> (m));
    int r,l;

    for(int i=1;i<=8;i++){

        for(int j=1;j<=8;j++){
            cin >> v[i][j];

        }
    }

    int prv=0;
    for(int i=1;i<=8;i++){
        int cnt=0;
        for(int j=1;j<=8;j++){

            if(v[i][j] == '#') {
                l=i, r=j;
                cnt++;
            }
        }
        if(prv==2 and cnt==1){
            cout << l << " " << r << endl;
            return;
        }
        prv = cnt;
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


