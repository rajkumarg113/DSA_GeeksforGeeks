//{ Driver Code Starts
//Initial Template for C++


// C++ implementation of the approach 
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to return the maximum water that can be stored.
    int maxWater(int height[], int n) 
    { 
        //Your code here
        int ans=-1,l=0,h=n-1;
        while(l<h)
        {
            ans=max(ans,min(height[l],height[h])*(h-l-1));
            if(height[l]<height[h])
                l++;
            else
                h--;
        }
        return ans;
    } 
};



//{ Driver Code Starts.

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int height[n];
        
        for(int i=0;i<n;i++)
        {
            cin>>height[i];
        }
        Solution ob;
        cout<<(ob.maxWater(height, n))<<endl;
    }

	 
} 


// } Driver Code Ends