#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


# } Driver Code Ends

#User function Template for python3

class Solution:
    #You need to complete this function
    def factorial(self,N):
        #Your code here
        fact=1
        for num in range(1,N+1):
            fact*=num
        return fact



#{ 
 # Driver Code Starts.

def main():
    
    T=int(input())
    
    while(T>0):
        N=int(input())
        ob=Solution()
        
        print(ob.factorial(N))
        
        
        T-=1
        print("~")
    
    




if __name__=="__main__":
    main()
# } Driver Code Ends