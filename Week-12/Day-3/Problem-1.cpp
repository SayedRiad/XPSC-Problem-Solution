
//https://codeforces.com/problemset/problem/1743/C

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
    vector<int> v(n);
    priority_queue<int> pq;

    for(int i=0;i<n;i++) cin >> v[i];

    int cnt=0;
    int ans=0; 
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            while(!pq.empty()){
                if(cnt>0){
                    ans += pq.top();
                    cnt--;
                }
                pq.pop();
            }
        }
        else{
            if(i-1>=0 and s[i-1]=='0')
                pq.push(v[i-1]);
            pq.push(v[i]);
            cnt++;
        }
    }

    while(!pq.empty()){
        if(cnt>0){
            ans += pq.top();
            cnt--;
        }
        pq.pop();
    }

    cout << ans << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}