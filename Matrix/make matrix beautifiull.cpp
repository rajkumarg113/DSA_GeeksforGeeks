//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        vector<int>sumR(n,0);
        vector<int>sumC(n,0);
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sumR[i]+=matrix[i][j];
                sumC[j]+=matrix[i][j];
            }
        }
        int maxSum=0;
        for(int i=0;i<n;i++)
        {
            maxSum=max(maxSum,sumR[i]);
            maxSum=max(maxSum,sumC[i]);
        }
        
        int operation=0;
        for(int i=0,j=0;i<n && j<n;)
        {
            int diff=min(maxSum-sumR[i],maxSum-sumC[j]);
            matrix[i][j]+=diff;
            sumR[i]+=diff;
            sumC[j]+=diff;
            
            operation+=diff;
            
            if(sumR[i]==maxSum)
                i++;
            if(sumC[j]==maxSum)
                j++;
            
        }
        return operation;
        
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
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends