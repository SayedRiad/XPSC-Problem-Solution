
//https://codeforces.com/problemset/problem/1271/B

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
    int n;
    string s;
    vi v;
    int cnt1=0,cnt2=0;
    cin >> n >> s;

    for(int i=0;i<n;i++) {
        if(s[i]=='W')
            cnt1++;
        else cnt2++;
    }

    if(cnt1==n  or cnt2==n)
        cout<<0<<endl;

    else if(cnt1%2 and cnt2%2 )
        cout<<-1<<endl;

    else{
        int i;
        for(i=0;i<n-1;i++){
            if(s[i]=='B' and s[i+1]=='W'){
                s[i] = 'W';
                s[i+1] = 'B';
                v.pb(i);
            }
            else if(s[i]=='B' and s[i+1]=='B' ){
                s[i] = s[i+1] = 'W';
                v.pb(i);
            }
        }

        if(s[n-1]=='B'){
            for(i=0;i<n-1;i+=2){
                v.pb(i);
            }
        }

        cout<< v.size() <<endl;
        for(auto u:v){
            cout << u+1 << " ";
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