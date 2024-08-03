 { 
       //Your code here
       int tillMax=1,currMax=1;
       for(int i=0;i<n-1;i++)
       {
           if((arr[i]%2==0 && arr[i+1]%2!=0) || (arr[i]%2!=0 && arr[i+1]%2==0))
           {
               currMax++;
               tillMax=max(currMax,tillMax);
           }
           else
               currMax=1;
       }
       return tillMax;
       
    } 