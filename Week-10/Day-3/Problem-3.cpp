
//https://codeforces.com/contest/1602/problem/A

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
    set<char> st;
    int n = s.size();
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }

    if(st.size()==1){
        cout << s[0] << ' ';
        --n;
        while(n--){
            cout << s[0];
        }
        cout << endl;
    }

    else{
        char ch = s[0];
        int j = 0;
        s[0] = '0';
        for(int i=1;i<n;i++){
            if(s[i]<ch){
                s[j] = ch;
                ch = s[i];
                j = i;
                s[i] = '0';
            }
        }

        cout << ch << ' ';

        for(int i=0;i<n;i++){
            if(s[i]!='0')
                cout << s[i];
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