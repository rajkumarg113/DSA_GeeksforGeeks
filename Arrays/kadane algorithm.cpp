long long maxSubarraySum(vector<int> &arr) {
        // code here...
        
        long long  max_so_far=INT_MIN,curr_max=0;
        for(int i=0;i<arr.size();i++)
        {
            curr_max+=arr[i];
            max_so_far=max(max_so_far,curr_max);
            if(curr_max<0)
            {
                curr_max=0;
            }
        }
        return max_so_far;
    }