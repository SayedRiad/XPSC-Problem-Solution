
//https://codeforces.com/contest/1352/problem/B

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
    ll n,k;                  cin >> n >> k;
    if(n<k){
        cout << "NO";
    }
    else if(n%k==0){
        cout << "YES\n";
        int kk=k;
        while(kk--){
            cout << n/k <<' ';
        }
    }
    else if(k%2){
        if(n%2==1){
            cout << "YES\n";
            int kk=k-1;
            while(kk--){
                cout << 1 <<' ';
            }
            cout << n-(k-1);
        }
        else if(n%2==0 and n>k*2){
            cout << "YES\n";
            int kk=k-1;
            while(kk--){
                cout << 2 <<' ';
            }
            cout << n-2*(k-1);
        }
        else cout << "NO";
    }
    else{
        if(n%2==0){
            cout << "YES\n";
            int kk=k-1;
            while(kk--){
                cout << 1 <<' ';
            }
            cout << n-(k-1);
        }
        else cout << "NO";
    }
    cout << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

