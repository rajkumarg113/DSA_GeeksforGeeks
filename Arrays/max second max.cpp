vector<int> largestAndSecondLargest(int sizeOfArray, int arr[]){
        int max = arr[0], max2= -1;
        
        for(int i=1;i<sizeOfArray;i++)
        {
            if(arr[i]>max)
            {
                max2=max;
                max=arr[i];
            }
            else if(arr[i]>max2 && arr[i]!=max)
            {
                max2=arr[i];
            }
        }
        
       return {max,max2};
         
    }