#{ 
 # Driver Code Starts
# Initial Template for Python 3



# } Driver Code Ends

# User function Template for python3

class Solution:
    def absolute(self,I):
        # code here
        return abs(I);



#{ 
 # Driver Code Starts.
def main():
    T = int(input()) #Input the number of testcases
    while(T > 0):
        I = int(input()) #input number
        ob=Solution()
        print(ob.absolute(I)) #Call function and print
        T -= 1 #Reduce number of testcases


        print("~")
if __name__ == "__main__":
    main()

# } Driver Code Ends