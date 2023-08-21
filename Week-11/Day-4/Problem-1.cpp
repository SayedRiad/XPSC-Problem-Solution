
//https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=959

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define vll vector<ll>
#define vi vector<int>
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool is_palindrome(string x){
    int n = x.size();
    for(int i=0,j=n-1;i<j;i++,j--){
        if(x[i]!=x[j])
            return 0;
    }

    return 1;
}

void solve(){
    string s;               cin >> s;
    string t, r = s;
    reverse(r.begin(),r.end());
    int cnt=0;
    while(1){
        cnt++;
        ll a = stoi(s);
        ll b = stoi(r);
        ll c = a+b;
        t = to_string(c);
        int res = is_palindrome(t);
        if(res==1) break;
        s = r = t;
        reverse(r.begin(),r.end());
    }

    cout << cnt << ' ' << t << endl;
    
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}