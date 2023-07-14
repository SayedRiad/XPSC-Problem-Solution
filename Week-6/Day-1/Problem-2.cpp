
//https://www.codechef.com/problems/WATERFILLING

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
    map<int,int> mp;
    for(int i=0;i<3;i++){
        int x;              cin >> x;
        mp[x]++;
    }
    if(mp[0]>=2)
        cout << "Water filling time\n";
    else
        cout << "Not now\n";
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}