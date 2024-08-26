//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        int count=0;
        sort(arr,arr+n);
        for(int i=n-1;i>=2;i--)
        {
            
            int l=0,h=i-1;
            while(l<h)
            {
                int k=arr[l]+arr[h];
                if(k>arr[i])
                {
                    count+=h-l;
                    h--;
                    
                }
                else
                    l++;
            }
            
        }
        return count;
    }
};


//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.findNumberOfTriangles(arr,n) <<endl;
    }
    return 0;
}
// } Driver Code Ends