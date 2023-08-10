
//https://codeforces.com/contest/1857/problem/B

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
    string s;                  cin >> s;
    int n = s.size();
    int i = n-1;
    int pos = n;
    while(i >= 0){
        if(s[i]-'0' >= 5){
            int j = i-1;
            while(j>=0 and s[j]=='9'){
                j--;
            }

            if(j == -1){
                pos = 1;
                s = '1' + s;
                break;
            }

            else{
                i = j;
                pos = j+1;
                int digit = s[i]-'0';
                digit++;
                s[i] = (char)(digit+'0');
            }
        }
        else{
            i--;
        }
    }

    for(int i=pos;i<s.size();i++){
        s[i] = '0';
    }

    cout << s << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}