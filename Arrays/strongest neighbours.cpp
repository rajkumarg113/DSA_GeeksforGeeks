void maximumAdjacent(int sizeOfArray, int arr[]){
    
    /*******************************************
     * Your code here
     * Function should print max adjacents for all pairs
     ********************************************/
     for(int i=1;i<sizeOfArray;i++)
     {
         if(arr[i]<arr[i-1])
            cout<<arr[i-1]<<" ";
        else
            cout<<arr[i]<<" ";
     }