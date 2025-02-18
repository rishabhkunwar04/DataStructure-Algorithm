
  #include <bits/stdc++.h>
#define ll long long int


  void merge(vector<int>&nums,int s,int mid,int e)
    {
        vector<int> tmp[e-s+1];
        int k=0;
        int i=s,j=mid+1;

        while(i<=mid && j<=e)
        {
            if(nums[i]>nums[j])
            {
                tmp[k++]=nums[j++];
            }else{
                tmp[k++]=nums[i++];
            }
        }

        while(i<=mid) tmp[k++]=nums[i++];
        while(j<=e) tmp[k++]=nums[j++]; 
       
        
        for(int i=0;i<k;i++)
        {
            nums[s++]=tmp[i];
        }
    }
    
    
        void mergeSort(vector<int>&nums,int s,int e)
       {
        if(s<e){
            int mid=(s+e)/2;
            mergeSort(nums,s,mid);
            mergeSort(nums,mid+1,e);
            merge(nums,s,mid,e);
        }
     }
    
     vector<int> sortArray(vector<int>& nums) {
      
        mergeSort(nums,0,nums.size()-1);
       return nums;
     }