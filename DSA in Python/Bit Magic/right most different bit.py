#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math




    
# } Driver Code Ends

#User function Template for python3

class Solution:
    
    #Function to find the first position with different bits.
    def posOfRightMostDiffBit(self,m,n):
        #Your code here
        if m==n:
            return -1
        else:
            xor_num=m^n
            set_bit_pos=1
            while xor_num:
                if xor_num & 1:
                    return set_bit_pos
                set_bit_pos+=1
                xor_num=xor_num>>1
                
        


#{ 
 # Driver Code Starts.
    
def main():
    
    T=int(input())
    
    while(T>0):
        
        m=int(input())
        n=int(input())
        ob=Solution()
        print(math.floor(ob.posOfRightMostDiffBit(m,n)))
        
        
        
        
        T-=1
        print("~")
    
    




if __name__=="__main__":
    main()
# } Driver Code Ends