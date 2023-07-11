
//https://codeforces.com/contest/1324/problem/C


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
    string s;					cin >> s;
    int l = count(s.begin(),s.end(),'L');
    int r = count(s.begin(),s.end(),'R');
    if(l==s.size()){
    	cout << l+1 << endl;
    	return;
    }
    if(r==s.size()){
    	cout << 1 << endl;
    	return;
    }
    int ans=0,cnt=0;
    for(int i=0;i<s.size();i++){
    	if(s[i]=='L')
    		cnt++;
    	else{
    		if(cnt>ans)
    			ans = cnt;
    		cnt=0;
    	}
    }
    if(cnt>ans)
    	ans = cnt;
    cout << ans+1 << endl;
}

int main(){
    opt();
    int t;                  cin >> t;
    
    while(t--){
        solve();
    }
    return 0;
}

