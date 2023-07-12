
//https://codeforces.com/contest/1335/problem/B

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
    int n,a,b;              cin >> n >> a >> b;
    string ans;
    int aa=a,bb=b;
    char c='a', ch='a';
    while(n--){
        if(aa!=0 and bb!=0){
            ans.pb(ch);
            if(ch=='z')
                ch = 'a';
            else ch = char(ch+1);
            --aa,--bb;
            if(aa==0 and bb==0){
                aa=a,bb=b;
                ch='a';
            }
        }
        else if(aa!=0 and bb==0){
            ans.pb(c);
            --aa;
            if(aa==0 and bb==0){
                aa=a,bb=b;
                ch='a';
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

