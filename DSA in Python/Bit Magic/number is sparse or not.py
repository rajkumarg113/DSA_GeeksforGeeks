#User function Template for python3

class Solution:
    
    #Function to check if the number is sparse or not.
    def isSparse(self,n):
        #Your code here 
        count_one=0;
        while n:
            if n&1:
                count_one+=1
                if count_one>1:
                    return False
            else:
                count_one=0
            n>>=1
        return True



#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math



def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        ob=Solution()
        if ob.isSparse(n):
            print("1")
        else:
            print("0")
        T-=1

        print("~")
if __name__=="__main__":
    main()
# } Driver Code Ends