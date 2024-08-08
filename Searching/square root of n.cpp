//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long int l=0,h=n,ans=0;
        while(l<=h)
        {
            long long int mid=l+(h-l)/2,msq=mid*mid;
            if(msq==n)
                return mid;
            else if(msq>n)
                h=mid-1;
            else
            {
                ans=mid;
                l=mid+1;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends