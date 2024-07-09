void reverseInGroups(vector<long long int> &arr, int k) {
        // code here
        
        int start=0;
        while(start<arr.size())
        {
            if(start+k<arr.size())
                reverse(arr.begin()+start,arr.begin()+start+k);
            else
                reverse(arr.begin()+start,arr.end());
            start+=k;
        }
    }