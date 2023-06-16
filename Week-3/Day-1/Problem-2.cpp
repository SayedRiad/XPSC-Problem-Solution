#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        int sum=0,ans=0;
        unordered_map<long long,int> u_mp;
        for(int i=0;i<N;i++){
            sum += A[i];
            if(sum == K){
                ans = max(ans, i+1);
            }
            if(u_mp.find(sum - K) != u_mp.end()){
                int idx = u_mp[sum-K];
                ans = max(ans, i - idx);
            }
            if(u_mp.find(sum) == u_mp.end()){
                u_mp[sum] = i;
            }
        }
        
        return ans;
    } 

};

int main() {
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
