#{ 
 # Driver Code Starts
#Initial Template for Python 3


import math


# } Driver Code Ends

#User function Template for python3
import math
class Solution:
    
    def is_prime_number(self,num):
        if num==2 or num==3:
            return True
        elif num<=1 or num%2==0 or num%3==0:
            return False
        else:
            for i in range(5,math.floor(math.sqrt(num)+1),6):
                if (num%i)==0 or (num)%(i+2)==0:
                    return False
        return True
            
    
    
    def exactly3Divisors(self,N):
        # code here
        count=0
        i=2
        while i*i<=N:
            if(self.is_prime_number(i)):
                count+=1
            i+=1
        return count
        
                
        
        


#{ 
 # Driver Code Starts.
def main():
    
    T=int(input())
    
    while(T>0):
        
        N=int(input())
        ob=Solution()
        print(ob.exactly3Divisors(N))
        
        T-=1
        print("~")
    

if __name__=="__main__":
    main()
# } Driver Code Ends