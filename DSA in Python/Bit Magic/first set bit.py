#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



# } Driver Code Ends

#User function Template for python3

class Solution:
    
    #Function to find position of first set bit in the given number.
    def getFirstSetBit(self,n):
        #Your code here
        set_bit_position=1
        while n:
            if n & 1:
                return set_bit_position
            set_bit_position+=1
            n=n>>1
        return 0


#{ 
 # Driver Code Starts.
    
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        
        print(ob.getFirstSetBit(n))
        
        
        T-=1
        print("~")
    
    




if __name__=="__main__":
    main()
# } Driver Code Ends