//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
public:
    //Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n ) {
        //code here
        int pre_sum=0;long long int count=0;
        unordered_map<long long int,int>h;
        for(int i=0;i<arr.size();i++)
        {
            pre_sum+=arr[i];
            if(pre_sum==0)
                count++;
            if(h.find(pre_sum)!=h.end())
                count+=h[pre_sum];
            h[pre_sum]++;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends