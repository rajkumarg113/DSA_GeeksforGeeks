#User function Template for python3
import math
class Solution:
    def digitsInFactorial(self,N):
        # code here
        count=0
        for i in range(1,N+1):
            count=count+math.log10(i)
        return math.floor(count)+1            


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math

def main():
    
    T=int(input())
    
    while(T>0):
        N=int(input())
        ob=Solution()
        print(ob.digitsInFactorial(N))
        
        T-=1

        print("~")
if __name__=="__main__":
    main()
# } Driver Code Ends