
//https://codeforces.com/contest/1864/problem/A

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
    int x,y,n;                  cin >> x >> y >> n;
    deque<int> dq;
    for(int i=y,j=1;i>=x;j++){
        dq.push_front(i);
        i -= j;
        if(dq.size()==n) {
            if(dq.front()!=x){
                dq.pop_front();
                dq.push_front(x);
            }
            break;
        }
    }

    if(dq.size()!=n)
        cout << -1 << endl;
    else{
        while(!dq.empty()){
            cout << dq.front() <<' ';
            dq.pop_front();
        }
        cout << endl;
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