
//https://www.codechef.com/problems/EVALMAS

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
    int n,x;                cin >> n >> x;
    if(x >= 1-n and x <= 1+n){
        if(x > 0){
            int cnt=1;
            while(cnt < x){
                cout << '+';
                cnt++;
            }
            int c = n-(cnt-1);
            while(c--){
                cout << '*';
            }
        }
        else{
            int cnt=0;
            while(cnt <= abs(x)){
                cout << '-';
                cnt++;
            }
            int c = n-cnt;
            while(c--){
                cout << '*';
            }
        }
        cout << endl;
    }
    else cout << -1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}