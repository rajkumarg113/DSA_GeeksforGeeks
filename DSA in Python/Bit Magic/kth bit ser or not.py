#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


# } Driver Code Ends

class Solution:
    
    # n : int
    # k : int
    # Return Type : Boolean
    def checkKthBit(self, n, k):
        # Your code here
        # while k+1:
        #     if k & 1:
        #         return True
        #     n=n>>1
        #     k-=1
        # return False
        
        return (n&(1<<k))


#{ 
 # Driver Code Starts.


    
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        k=int(input())
        obj = Solution()
        if obj.checkKthBit(n,k):
            print("true")
        else:
            print("false")
        print("~")    
        
        T-=1

if __name__=="__main__":
    main()
# } Driver Code Ends