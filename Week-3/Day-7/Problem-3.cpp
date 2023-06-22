
//https://codeforces.com/contest/1744/problem/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define mx 20001
#define pb push_back
#define opt() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int n;
    char ch;
    string s;
    cin >> n >> ch;
    cin >> s;
    int first_g=-1;
    for(int i=0;i<n;i++){
        if(s[i]=='g'){
            first_g = i+1;
            break;
        }
    }
    if(ch=='g'){
        cout << 0 << endl;
        return;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]==ch){
            int cnt=0, flag=0;
            for(int j=i+1;j<n;j++){
                cnt++;
                if(s[j]=='g'){
                    flag=1;break;
                }
            }
            i += cnt;
            if(flag){
                ans = max(ans,cnt);
            }
            else{
                ans = max(ans,cnt+first_g);
            }
        }
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

