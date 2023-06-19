
//https://codeforces.com/contest/1772/problem/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int a,b,c,d,e;          cin >>a>>b>>c>>d;

    if((a<b and a<c) and c<d and b<d){
        cout << "YES" << endl;
        return;
    }

    for(int i=1;i<=3;i++){
        e = a;
        a = c;
        c = d;
        d = b;
        b = e;
        if((a<b and a<c) and c<d and b<d){
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

