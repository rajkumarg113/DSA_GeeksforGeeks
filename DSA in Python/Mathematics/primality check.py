#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


# } Driver Code Ends

#User function Template for python3
import math
class Solution:
    def isPrime(self,N):
        # code here
        if N==2 or N==3:
            return True
        elif N<=1 or N%2==0 or N%3==0:
            return False
        else:
            for i in range(5,math.floor(math.sqrt(N))+1,6):
                if(N%i==0 or N%(i+2)==0):
                    return False
            return True


#{ 
 # Driver Code Starts.
def main():
    
    T=int(input())
    
    while(T>0):
        
        N=int(input())
        
        ob=Solution()
        if(ob.isPrime(N)):
            print("Yes")
        else:
            print("No")
        T-=1
        print("~")
    
    
if __name__=="__main__":
    main()
# } Driver Code Ends