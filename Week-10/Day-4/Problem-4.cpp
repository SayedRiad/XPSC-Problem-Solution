
//https://codeforces.com/contest/1605/problem/B

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
    int n;             cin >> n;
    string s, k;       cin >> s;

    vi a(n);
    int m = 0;
    k = s;

    sort(s.begin(), s.end());

    for(int i = 0; i < s.length(); i++){
        if(k[i] != s[i]){
            a[m] = i+1;
            m++;
        }
    }

    if(m != 0){
        cout << 1 << endl;
    }

    cout << m << " ";

    for(int i = 0; i < m; i++){
        cout << a[i]<<" ";
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