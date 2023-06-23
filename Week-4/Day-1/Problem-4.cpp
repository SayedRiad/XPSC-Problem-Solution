
//https://www.codechef.com/problems/ALTTAB

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin>>n;
    map<string,int> m;
    deque<string> dq;
    while(n--){
        string s; cin>>s;
        dq.push_front(s);
    }
    string ans;
    while(!dq.empty()){
        string r = dq.front();
        if(m[r]==0){
            ans+=r[r.size()-2];
            ans+=r[r.size()-1];
        }
        m[r]++;
        
        dq.pop_front();
    }
    cout << ans << endl;
}

int main(){
    opt();
    int t=1;                  //cin >> t;

    while(t--){
        solve();
    }
    return 0;
}
