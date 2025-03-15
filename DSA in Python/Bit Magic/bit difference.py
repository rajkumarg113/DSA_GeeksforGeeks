#User function Template for python3

class Solution:
    ##Complete this function
    # Function to find number of bits needed to be flipped to convert A to B
    def countBitsFlip(self, a, b):
        ##Your code here
        xor_a_b=a^b
        count=0
        while xor_a_b:
             if xor_a_b & 1:
                 count+=1
             xor_a_b>>=1
        return count
                 
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math


def main():

    T = int(input())

    while (T > 0):

        ab = [int(x) for x in input().strip().split()]
        a = ab[0]
        b = ab[1]
        ob = Solution()
        print(ob.countBitsFlip(a, b))
        T -= 1

        print("~")


if __name__ == "__main__":
    main()

# } Driver Code Ends