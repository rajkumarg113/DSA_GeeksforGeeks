int median(int A[],int N)
    {
        
        sort(A,A+N);
        if(N%2!=0)
            return (A[N/2]);
        
        else
            return ((A[N/2]+A[(N/2)-1])/2);
        
        //your code here
        //If median is in fraction then convert it to integer and return
    }
    //Function to find mean of the array elements.
    int mean(int A[],int N)
    {
        //your code here 
        int sum=0,i=0;
        for(i=0;i<N;i++)
            sum=sum+A[i];
    
        return floor(sum/N);
        
    }