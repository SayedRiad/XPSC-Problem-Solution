
//https://www.codechef.com/problems/CONSTR

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
    string s;               cin >> s;
    
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]) cnt++;
        else if(s[i]!=s[i+1] and cnt==0)
            cout << s[i];
        else {
            ++cnt;
            if(cnt&1)
                cout << s[i];
            else
                cout << s[i]<<s[i];
            cnt=0;
        }
    }
    if(cnt!=0){
        ++cnt;
        if(cnt&1)
            cout << s[n-1];
        else
            cout << s[n-1]<<s[n-1];
    }
    else
        cout << s[n-1];
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