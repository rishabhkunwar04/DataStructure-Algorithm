
    //HEAP SORT
   /* For zero-based arrays, for a certain node x:

its parent floor( (x - 1) / 2 )
its left child 2x + 1
its right child 2x + 2
The index of the last non-leaf node of a n-sized heap is floor( n / 2 ) - 1.*/



        void maxHeapify(vector<int>& nums,int p,int n)
    {
        int left=2*p+1;
        int right=2*p+2;
        int maxm=p;
        if(left<n && nums[maxm]<nums[left]){
            maxm=left;
        }
         if(right<n && nums[maxm]<nums[right]){
            maxm=right;
        }
        if(maxm!=p)
        {
        swap(nums[maxm],nums[p]);
        maxHeapify(nums,maxm,n);
        }
    }
    
    void buildHeap(vector<int>& nums,int n)//max heap
    {
        for(int i=floor(n/2)-1;i>=0;i--) // from non leaf node  down to parent node
        {
            maxHeapify(nums,i,n);
        }
    }
    
    void heapSort(vector<int>& nums,int n)
    {
        buildHeap(nums,n);
        for(int i=n-1;i>=0;i--)
        {
            swap(nums[0],nums[i]);
            n--;
            maxHeapify(nums,0,n);
        }
    }
    
    
    vector<int> sortArray(vector<int>& nums) {
      
        heapSort(nums,nums.size());
       return nums;
     }
