
//https://codeforces.com/contest/1676/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n,m;                    cin >> n >> m;

    vector<vector<int>> a(n+1, vector<int> (m+1));
    vector<int>v;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int sum=0;
            for(int k=i+1,l=j+1;k<=n&&l<=m;k++,l++){
                sum+=a[k][l];
            }
            for(int k=i-1,l=j-1;k>=1&&l>=1;k--,l--){
                sum+=a[k][l];
            }
            for(int k=1;k<=n;k++){
                for(int l=1;l<=m;l++){
                    if(k+l==i+j) sum+=a[k][l];
                }
            }
            v.push_back(sum);
        }
    }

    sort(v.begin(),v.end());
    cout << v.back() << endl;
    v.clear();
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
