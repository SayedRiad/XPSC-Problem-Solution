
//https://codeforces.com/contest/1675/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve(){
    //int n;                 cin >> n;        
    string s;                cin >> s;
    int sz=s.size();
    if(count(s.begin(),s.end(),'?')==sz){
        cout << sz << endl;
        return ;
    }
    if(count(s.begin(),s.end(),'1')==0){
        int ans=0;
        for(int i=0;i<sz;i++){
            ans++;
            if(s[i]=='0') break;
        }
        cout << ans << endl;
        return ;
    }
    int lz=-1;
    int ans;
    for(int i=sz-1;i>=0;i--){
        if(s[i]=='0') lz=i;
        else if(s[i]=='1'){
            if(lz==-1){
                ans=sz-i;
                break;
            }else{
                ans=lz-i+1;
                break;
            }
        }      
    }
    cout << ans << endl;
}

int main(){
    opt();
    int t;                 cin >> t;

    while(t--){
        solve();
    }
    return 0;

}