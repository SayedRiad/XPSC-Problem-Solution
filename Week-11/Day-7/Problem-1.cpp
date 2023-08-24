
//https://codeforces.com/contest/1841/problem/B

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
    int n;                  cin >> n;
    vi a(n),b;
    string ans;
    int c=0;
    for(int i=0;i<n;i++){
        cin >> a[i];

        if(ans.size()==0){
            ans.pb('1');
            b.pb(a[i]);
        }

        else{
            if(c){
                if(a[i]<b.back()){
                    ans.pb('0');
                }
                else{
                    if(a[i]>b[0]){
                        ans.pb('0');
                    }
                    else{
                        ans.pb('1');
                        b.pb(a[i]);
                    }
                }
            }

            else{
                if(a[i]>=b.back()){
                    ans.pb('1');
                    b.pb(a[i]);
                }
                else{
                    if(a[i]>b[0]){
                        ans.pb('0');
                    }
                    else{
                        c=1;
                        ans.pb('1');
                        b.pb(a[i]);
                    }
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