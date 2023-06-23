
//https://www.codechef.com/problems/BOX95

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;                  cin >> n;
    vector<ll> v(n);
    multiset<ll> ms;

    for(int i=0;i<n;i++)    cin >> v[i];
    sort(v.rbegin(),v.rend());

    for(int i=0;i<n;i++){
        if(ms.size()==0){
            ms.insert(v[i]);
        }
        else{
            ll last_value = *(--ms.end());
            if(last_value >= v[i]){
                ms.erase(--ms.end());
                ms.insert(last_value ^ v[i]);
            }
            else ms.insert(v[i]);
        }
    }
    
    cout << ms.size() << endl;
}

int main(){
    opt();
    int t;                  cin >> t;

    while(t--){
        solve();
    }
    return 0;
}

