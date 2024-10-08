//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int res=0;
    
    void merge(long long arr[],long long l,long long m,long long h)
    {
        long long n1=m-l+1,n2=h-m;
        long long larr[n1],rarr[n2];
        for(long long i=0;i<n1;i++)
        {
            larr[i]=arr[l+i];
        }
        for(long long i=0;i<n2;i++)
        {
            rarr[i]=arr[m+i+1];
        }
        long long i=0,j=0,k=l;
        while(i<n1 && j<n2)
        {
            if(larr[i]<=rarr[j])
                arr[k++]=larr[i++];
            else
            {
                arr[k++]=rarr[j++];
                res+=n1-i;
            }
        }
        
         while(i<n1)
            arr[k++]=larr[i++];
        while(j<n2)
            arr[k++]=rarr[j++];
        
        
    }
    
    
    
    void mergeSort(long long arr[],long long l,long long h)
    {
        if(l<h)
        {
            long long  m=l+(h-l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,h);
            merge(arr,l,m,h);
        }
    }
    
    
    
    
    long long int inversionCount(long long arr[], int n) {
        // Your Code Here
        mergeSort(arr,0,n-1);
        return res;
    }
};

//{ Driver Code Starts.

int main() {

    long long T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}

// } Driver Code Ends