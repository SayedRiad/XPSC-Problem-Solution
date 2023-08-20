
//https://codeforces.com/problemset/problem/1516/B

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
    vi a(n), pref(n);
    for(int i=0;i<n;i++)    cin >> a[i];
    
    pref[0] = a[0];
    for(int i=1;i<n;i++)
        pref[i] = (pref[i-1]^a[i]);

    for(int i=0;i<n-1;i++){
        if(pref[i]==(pref[n-1]^pref[i])){
            cout << "YES\n";
            return;
        }
    }

    for(int i=0;i<n-2;i++){
        int first_seg = pref[i];
        for(int j=i+1;j<n-1;j++){
            int second_seg = (pref[i]^pref[j]);
            int third_seg = (pref[j]^pref[n-1]);

            if(first_seg==second_seg and second_seg==third_seg){
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}