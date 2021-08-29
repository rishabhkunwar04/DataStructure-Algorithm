//subset or power set or subsequence

//iterative approach
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        ans.push_back({});
        
        for(int i=0; i<n; i++)
        {
            int sz = ans.size();
            for(int j=0; j<sz; j++)
            {
                vector<int> temp = ans[j];
                temp.push_back(nums[i]);
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};

//recursive
class Solution {
public:
    vector<vector<int>> ans;
    
    void sub(vector<int> &nums, int i, vector<int> temp)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        sub(nums, i+1, temp);
        temp.push_back(nums[i]);
        sub(nums, i+1, temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;       
        sub(nums, 0, temp); // or sub(nums, 0, vector<int> {});
        return ans;
    }
};

//recursive(Aditya verma )
class Solution {
public:
    vector<vector<int> >m;
    void solve(vector<int>nums,vector<int>op)
    {
        if(nums.size()==0)
        {
            m.push_back(op);
            return;
        }
        vector<int>op1=op,op2=op;
        op1.push_back(nums[0]);
        nums.erase(nums.begin()+0);
        solve(nums,op1);
        solve(nums,op2);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>op;
        solve(nums,op);
        return m;
        
    }
};

//bit manipulation
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        int num = pow(2, n), i = 0;
        
        while(i<num)
        {
            vector<int> temp;
            for(int j=0; j<n; j++)
            {
                if(i & 1<<j)
                    temp.push_back(nums[j]);
            }
            ans.push_back(temp);
            i++;
        }
        
        return ans;
    }
};

