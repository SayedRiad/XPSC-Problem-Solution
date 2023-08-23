
//https://codeforces.com/contest/1845/problem/A

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
    int n,k,x;              cin >> n >> k >> x;
    if(k==1 and x==1)
        cout << "NO\n";
    else if(x==1 and k==2 and n&1)
        cout << "NO\n";
    else{
        cout << "YES\n";
        if(x!=1){
            cout << n << endl;
            while(n--){
                cout << 1 << ' ';
            }
        }
        else if(n%2==0){
            n /= 2;
            cout << n << endl;
            while(n--){
                cout << 2 << ' ';
            }
        }
        else if(n%3==0){
            n /= 3;
            cout << n << endl;
            while(n--){
                cout << 3 << ' ';
            }
        }
        else{
            n /= 2;
            n;
            cout << n << endl;
            --n;
            while(n--){
                cout << 2 << ' ';
            }
            cout << 3 << ' ';
        }
        cout << endl;
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