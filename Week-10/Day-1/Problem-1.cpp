
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415&fbclid=IwAR1AvrmyvzCf-NszbOsz3oAAVcv84Q7gxbY18sasMFrvTrwKFd7DCyiNsHU

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
    int n,q;
    int i=0;
    while(cin >> n >> q){
        if(n==0 and q==0)
            break;
        i++;
        vi v(n);
        for(int i=0;i<n;i++)    
            cin >> v[i];

        sort(v.begin(),v.end());
        cout << "CASE# " << i << ':' << endl;
        while(q--){
            int x;      cin >> x;
            auto it = lower_bound(v.begin(),v.end(),x);
            int indx = it - v.begin();
            
            if(indx==n or v[indx]!=x)
                cout << x << " not found" << endl;
            else
                cout << x << " found at " << indx+1 << endl;
        }
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