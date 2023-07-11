
//https://codeforces.com/contest/1472/problem/B

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
    int n,one=0,two=0;       cin >> n;

    for(int i=0;i<n;i++){
        int x;               cin >> x;
        if(x==1)  one++;
        else      two++;
    }

    if(n%2){
        if(two%2==1 and one>0 and one%2==0)
           cout << "YES\n";
        else
           cout << "NO\n";
    }

    else{
        if(one%2==0 and two%2==0)
           cout << "YES\n";
        else
           cout << "NO\n";
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

