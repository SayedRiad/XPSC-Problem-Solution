
//https://www.codechef.com/problems/ANTIPALINDR

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
    map<char,int> mp;

    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    
    int odd=0;
    for(auto u:mp){
        if(u.second%2){
            odd++;
        }
    }
    if(odd and n%2==0){
        cout << 0 << endl;
    }
    else if(odd==0 and n%2==0){
        cout << 1 << endl;
    }
    else if(n&1 and odd>=2){
        cout << 0 << endl;
    }
    else if(n&1 and odd==1 and mp.size()==1){
        cout << 2 << endl;
    }
    else
        cout << 1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}