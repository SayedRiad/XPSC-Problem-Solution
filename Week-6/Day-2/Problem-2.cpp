
//https://www.codechef.com/problems/SEATNUMBER

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
    if(n>=1 and n<=10)
        cout << "Lower Double\n";
    else if(n>=11 and n<=15)
        cout << "Lower Single\n";
    else if(n>=16 and n<=25)
        cout << "Upper Double\n";
    else
        cout << "Upper Single\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}