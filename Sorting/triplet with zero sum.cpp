//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

// } Driver Code Ends
/* You are required to complete the function below
*  arr[]: input array
*  n: size of array
*/
class Solution{
  public:
    //Function to find triplets with zero sum.
    
    bool isPair(int arr[],int low,int high,int x)
    {
        int l=low,h=high;
        while(l<h)
        {
            if((arr[l]+arr[h])==(-x))
                return true;
            else if( (arr[l]+arr[h])>(-x)  )
                h--;
            else
                l++;
        }
        return false;
    }
    
    
    
    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n-2;i++)
        {
            if(isPair(arr,i+1,n-1,arr[i]))
                return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
	cin>>t;
	while(t--){
    	int n;
    	cin>>n;
    	int arr[n]={0};
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	Solution obj;
        if(obj.findTriplets(arr, n))
            cout<<"1"<<endl;
        else 
            cout<<"0"<<endl;
	}
    return 0;
}
// } Driver Code Ends