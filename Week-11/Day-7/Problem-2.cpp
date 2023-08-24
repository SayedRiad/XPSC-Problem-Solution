
//https://codeforces.com/contest/1837/problem/A

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
    int x,k;                  cin >> x >> k;

    if(k>x){
        cout << 1 << endl;
        cout << x << endl;
    }
    
    else{
        if(x%k!=0){
            cout << 1 << endl;
            cout << x << endl;
        }
        else{
            cout << 2 << endl;
            for(int i=1;i<=x/2;i++){
                if(i%k!=0 and (x-i)%k!=0){
                    cout << i << ' ' << x-i << endl;
                    break;
                }
            }
        }
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