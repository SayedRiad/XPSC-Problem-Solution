
//https://codeforces.com/contest/1722/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;              cin>>n;
    string s;           cin>>s;
    vector<ll> v,ans(n+1);
    ll sum=0;
    int min_cng=0;
    for(int i=0;i<n;i++){
        ll L=i;
        ll R=n-i-1;
        if(s[i]=='L'){
            if(R>L){
                min_cng++;
                sum+=R;
                v.push_back(R-L);
            }
            else{
                sum+=L;
            }
        }
        else{
            if(L>R){
                min_cng++;
                sum+=L;
                v.push_back(L-R);
            }
            else{
                sum+=R;
            }
        }
    }
    for(int i=min_cng;i<=n;i++){
        ans[i]=sum;
    }
    sort(v.begin(),v.end(),greater<ll>());
    for(int i=min_cng-1;i>=1;i--){
        sum-=v.back();
        v.pop_back();
        ans[i]=sum;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

