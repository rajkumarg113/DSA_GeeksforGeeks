class Solution{
    public:
    //Function to find minimum adjacent difference in a circular array.
    // arr[]: input array
    // n: size of array
    int minAdjDiff(int arr[], int n){    
        // Your code here
        int res=abs(arr[n-1]-arr[0]);
        for(int i=1;i<n;i++)
        {
            int diff=abs(arr[i]-arr[i-1]);
            if(diff<res)
                res=diff;
        }
        return res;
        
    }
};