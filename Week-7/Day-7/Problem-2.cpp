
//https://www.codechef.com/problems/MAKE_AB_SAME

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
    vi a(n),b(n);
    int a1=0;
    for(int i=0;i<n;i++) {   
        cin >> a[i];
        if(a[i]==1) a1++;
    }
    for(int i=0;i<n;i++) {   
        cin >> b[i];
    }
    
    if(a[0]!=b[0] or a[n-1]!=b[n-1]){
        cout << "NO\n";
    }

    else{
        for(int i=1;i<n-1;i++){
            if(a[i]!=b[i] and a[i]==0 and a1==0){
                cout << "NO\n";
                return;
            }
            
            else if(a[i]!=b[i] and a[i]==1){
                cout << "NO\n";
                return;
            }
        }
        cout << "YES\n";
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