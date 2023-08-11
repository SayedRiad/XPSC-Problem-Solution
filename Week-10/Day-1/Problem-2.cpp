
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1552&fbclid=IwAR3MYo_0XKPMmMVJzL1SzIkOOFGnFiHJbQD2dPF7ZIq8ZkYNit1FME7F2xM

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
    vi v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];

    int q;      cin >> q;

    while(q--){
        int x;  cin >> x;

        auto it1 = lower_bound(v.begin(),v.end(),x);
        auto it2 = upper_bound(v.begin(),v.end(),x);

        int indx1 = it1 - v.begin();
        int indx2 = it2 - v.begin();

        if(indx1==0)
            cout << "X ";
        else
            cout << v[indx1-1] << ' ';
        if(indx2==n)
            cout << 'X' << endl;
        else
            cout << v[indx2] << endl;
    }
}

int main(){
    opt();
    int t=1;                  //cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}