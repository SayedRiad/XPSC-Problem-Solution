
//https://www.codechef.com/problems/MATDIF

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
    
    int c=1,d=2;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(c<=n*n){
                cout << c <<' ';
                c+=2;
            }
            else{
                cout << d <<' ';
                d+=2;
            }
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