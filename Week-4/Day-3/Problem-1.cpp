
//https://codeforces.com/contest/1714/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    vi a(n);
    map<int,int> mp;
    int unq=0,ans=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(mp[a[i]]==0) unq++;
        mp[a[i]]++;
    }
    int m=n;
    for(int i=0;i<n;i++){
        if(m==unq) break;
        mp[a[i]]--;m--;
        if(mp[a[i]]==0) unq--;
        ans++;
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

