
//https://codeforces.com/contest/1676/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,m;                    cin >> n >> m;

    vector<string> v(n);
    vector<int> ans;

    for(int i=0;i<n;i++){
        cin >> v[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            string s,r;
            s=v[i],r=v[j];
            int sum=0;
            for(int k=0;k<m;k++){
                if(s[k]!=r[k]){
                    sum+=abs(s[k]-r[k]);
                }
            }
            ans.push_back(sum);
        }
    }

    sort(ans.begin(),ans.end());

    cout << ans[0] << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}


