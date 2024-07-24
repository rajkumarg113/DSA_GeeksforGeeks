void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        unordered_map<int,int>ump;
        for(int i=0;i<N;i++)
        {
            if(arr[i]<=N)
                ump[arr[i]]++;
        }
        for(int i=0;i<N;i++)
        {
            arr[i]=ump[i+1];
        }
    }