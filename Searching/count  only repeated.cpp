//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution
{
    public:
    //Function to find repeated element and its frequency.
    pair<long, long> findRepeating(long *arr, int n){
        //code here
        int count=n-(arr[n-1]-arr[0]);
        if(n==1)
            return {-1,-1};
        long l=0,h=n-1;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            if (arr[mid-1]==arr[mid] || arr[mid+1]==arr[mid])
                return {arr[mid],count};
            else if(arr[mid]-arr[l]==mid-l)
                l=mid+1;
            else
                h=mid-1;
        }
        return {-1,-1};
        
        
    
    }
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    long arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    Solution obj;
	    pair<long, long> ans = obj.findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}
// } Driver Code Ends