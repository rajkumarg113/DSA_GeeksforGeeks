#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


# } Driver Code Ends

#User function Template for python3
import math
class Solution:    
    #Compelte his function
    def termOfGP(self,A,B,N):
        #Your code here
        r=B/A
        return A*math.pow(r,(N-1))



#{ 
 # Driver Code Starts.
def main():
    
    T=int(input())
    
    while(T>0):
        
        AB=[int(x) for x in input().strip().split()]
        A=AB[0]
        B=AB[1]
        
        N=int(input())
        ob=Solution()
        print(math.floor(ob.termOfGP(A,B,N)))
        
        T-=1
        print("~")
    
    




if __name__=="__main__":
    main()
# } Driver Code Ends