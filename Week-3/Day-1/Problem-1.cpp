int longestSubarrayWithSumK(vector<int> a, long long k) {
    long long sum=0;
    int ans=0;
    
    for(int i=0,j=0;i<a.size();i++){
        sum+=a[i];
        if(sum==k){
            ans = max(ans,i-j+1);
        }
        else if(sum>k){
            while(sum>k){
                sum-=a[j];
                j++;
            }
            if(sum==k) ans = max(ans,i-j+1);
        }
    }

    return ans;
}