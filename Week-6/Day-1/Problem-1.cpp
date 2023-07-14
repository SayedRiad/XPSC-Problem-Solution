
//https://www.codechef.com/problems/ONEFULPAIRS

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
    int a,b;                cin >> a >> b;
    if(a+b+a*b==111)
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}