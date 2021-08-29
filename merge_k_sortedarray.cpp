
//using inbuilt heap

class Solution
{
    public:

 vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        
        for(int i=0;i<k;i++)
        {
            pq.push(make_pair(arr[i][0],make_pair(i,0)));
        }
        
        vector<int>res;
        while(!pq.empty())
        
        {
            pair<int,pair<int,int>>p=pq.top();
            pq.pop();
            res.push_back(p.first);
            
            if(p.second.second<k-1){
            int i=p.second.first;
            int j=p.second.second;
            j=j+1;
            pq.push(make_pair(arr[i][j],make_pair(i,j)));
            }
            
        }
        
        return res;
    }
};

    //***using class attributes

    class element{
    public:
    int val;
    int row;
    int col;
    
    element(int val,int row,int col)
    {
        this->val=val;
        this->row=row;
        this->col=col;
    }
    
};

//to compare the element of class we need to do operator oveloading
struct compare{
     bool operator()(element a,element b){
         return a.val>b.val;
     }
    
};


class Solution
{
    public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        priority_queue<element,vector<element>,compare>pq;
        
        for(int i=0;i<k;i++)
        {
            
          element temp(arr[i][0],i,0);
            pq.push(temp);
        }
        
        vector<int>res;
        while(!pq.empty())
        
        {
            element p=pq.top();
            pq.pop();
            res.push_back(p.val);
            
            if(p.col<k-1){
                
            int i=p.row;
            int j=p.col;
            j=j+1;
            element temp(arr[i][j],i,j);
            pq.push(temp);
            }
            
        }
        
        return res;
    }
};