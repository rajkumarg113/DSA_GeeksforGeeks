void insertAtIndex(int arr[], int sizeOfArray, int index, int element)
    {
        //Your code here
        if(index==(sizeOfArray-1)){
            arr[index]=element;
            return;}
        int i;
        for(i=sizeOfArray-2;i>=index;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[i+1]=element;
        
        
        
        
    }