int equilibriumPoint(vector<long long> &arr) {
        // Your code here
        long long arrSum=0,currSum=0;
        if(arr.size()==1)
            return 1;
        for(int i=0;i<arr.size();i++)
            arrSum+=arr[i];
        
        for(int i=0;i<arr.size();i++)
        {
            arrSum-=arr[i];
            if(arrSum==currSum)
                return i+1;
            currSum+=arr[i];
        }
        return -1;
    }