
//https://lightoj.com/problem/discovering-permutations

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int cs=0;
void solve(){
    int n,k;                   cin >> n >> k;
    string s;
    set<string> ans;
    for(int i=0;i<n;i++){
        char ch = char('A'+i);
        s.pb(ch);
    }
     
    cout << "Case " << ++cs << ":" << endl;
    ans.insert(s);
    for(int i=1;i<k;i++){
        next_permutation(s.begin(),s.end());
        ans.insert(s);
    }
    for(auto i:ans)
        cout << i << endl;
}

int main(){
    opt();
    int t;                     cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}