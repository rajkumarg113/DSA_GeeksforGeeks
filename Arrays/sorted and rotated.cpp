bool checkRotatedAndSorted(int arr[], int num){
        
        // Your code here
        int x=0, y=0;
       
       for(int i=0; i<num-1; i++){
           if(arr[i]< arr[i+1])
               x++;
           else
               y++;}
       
       if(x==1 || y==1){
           
           if(arr[num-1]<arr[0]){
               x++;
           }
           else{
               y++;
           }
           
           if(x==1 || y==1)
               return true;
       }
       
       
       return false;
        
    }