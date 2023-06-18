
//https://codeforces.com/contest/1703/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                 cin >> n;
    vector<string> v(n);
    map<string, int> frq;

    for(int i=0;i<n;i++){
        cin >> v[i];
        frq[v[i]]++;
    }

    string ans(n,'0');
    for(int i=0;i<n;i++){
        if(v[i].size()==1) continue;

        for(int j=0;j<v[i].size()-1;j++){
            string x, y;

            for(int k=0;k<=j;k++){
                x.pb(v[i][k]);
            }

            for(int k=j+1;k<v[i].size();k++){
                y.pb(v[i][k]);
            }

            if(x==y){
                if(frq[x]>0){
                    ans[i] = '1';
                    break;
                }
            }
            else{
                if(frq[x]>0 and frq[y]>0){
                    ans[i] = '1';
                    break;
                }
            }

        }
    }

    cout << ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
