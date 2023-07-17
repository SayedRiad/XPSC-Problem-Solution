
//https://www.codechef.com/problems/DDMMORMMDD

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
    string s;               cin >> s;
    int x1 = s[0]-'0';
    int x2 = s[1]-'0';
    int x3 = s[3]-'0';
    int x4 = s[4]-'0';
    if((x1==0 and x2<=9) or (x1==1 and x2<=2)){
        if((x3==0 and x4<=9) or (x3==1 and x4<=2))
            cout << "BOTH\n";
        else
            cout << "MM/DD/YYYY\n";
    }
    else
        cout << "DD/MM/YYYY\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}