#User function Template for python3

from typing import List
import math
class Solution:
	def quadraticRoots(self, a : int, b : int , c:int ) -> List[int]:
        # code here
        d=(b*b)-(4*a*c)
        if d < 0:
            return [-1]
        else:
            d=math.sqrt(d)
            x1=math.floor((-b+d)/(2*a))
            x2=math.floor((-b-d)/(2*a))
            return [max(x1,x2),min(x1,x2)]




#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    for _ in range(tc):
        abc = [int(x) for x in input().strip().split()]
        a = abc[0]
        b = abc[1]
        c = abc[2]
        ob = Solution()
        ans = ob.quadraticRoots(a, b, c)
        if len(ans) == 1 and ans[0] == -1:
            print("Imaginary")
        else:
            for i in range(len(ans)):
                print(ans[i], end=" ")
            print()

        print("~")
# } Driver Code Ends