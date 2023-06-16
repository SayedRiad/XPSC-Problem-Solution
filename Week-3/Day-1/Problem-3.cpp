#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int freq[26]={0}, unique=0, ans=-1;
        
        for(int i=0, j=0; i<s.size(); i++){
            if(freq[s[i]-'a'] == 0) unique++;
            freq[s[i]-'a']++;
            
            if(unique == k){
                ans = max(ans, i-j+1);
            }
            
            if(unique > k){
                while(unique > k){
                    freq[s[j]-'a']--;
                    if(freq[s[j]-'a'] == 0) unique--;
                    j++;
                }
                ans = max(ans, i-j+1);
            }
        }
        
        return ans;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}