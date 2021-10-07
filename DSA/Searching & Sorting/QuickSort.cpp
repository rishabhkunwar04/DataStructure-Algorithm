/*****QUICK SORT***/

   int partition(vector<int>& nums,int s,int e)
    {
        int random=s+rand()%(e-s+1); //randomised quick sort,geting the random index
         
        swap(nums[random],nums[e]);
        int pivot=nums[e];
          
        int i=s-1;
        for(int j=s;j<=e-1;j++)
        {
            if(nums[j]<=pivot)
            {
                i++;
                swap(nums[i],nums[j]);
              
            }
        }
        swap(nums[i+1],nums[e]);
        return i+1;
    }

   void quicksort(vector<int>& nums,int s,int e)
    {
        if(s<e)//s==e stopping condn
        {
            int p=partition(nums,s,e);
            quicksort(nums,s,p-1);
            quicksort(nums,p+1,e);
        }
    }

   vector<int> sortArray(vector<int>& nums) {
      //quick sort
        quicksort(nums,0,nums.size()-1);
        return nums;
            
        
    }
