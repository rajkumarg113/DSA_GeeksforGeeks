#User function Template for python3


class Solution:
    ##Complete this function
    # Function to calculate the longest consecutive ones
    def maxConsecutiveOnes(self, N):
        ##Your code here
        till_max_one=0
        count_one=0
        while N:
            if N & 1:
                count_one+=1
                till_max_one=max(till_max_one,count_one)
            else:
                count_one=0
            N>>=1
        return till_max_one
        





#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math





def main():
    
    T=int(input())
    
    while(T>0):
        
        
        n=int(input())
        obj = Solution()
        print(obj.maxConsecutiveOnes(n))
        T-=1

        print("~")
if __name__=="__main__":
    main()
# } Driver Code Ends