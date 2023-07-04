
//https://codeforces.com/contest/1690/problem/A

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
    int x=n/3;
    if(n%3==0) {
        cout << x <<' '<< x+1 <<' '<< x-1 << endl; 
    }
    else if(n%3==1) {
        if(x-2==0)
            cout << x <<' '<< x+2 <<' '<< x-1 << endl; 
        else
            cout << x+1 <<' '<< x+2 <<' '<< x-2 << endl; 
    }
    else{
        cout << x+1 <<' '<< x+2 <<' '<< x-1 << endl; 
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

