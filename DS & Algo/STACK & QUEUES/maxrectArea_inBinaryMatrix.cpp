
#include <bits/stdc++.h>
#define ll long long int

using namespace std;


 int largeRectangleArea(vector<int>& h){
               h.push_back(0); 
        stack<int> s;
        int result=0;
        for(int i=0;i<h.size();){
            if(s.empty()||h[i]>=h[s.top()]){
                s.push(i);
                i++;
            }else{
                int temp=s.top();
                s.pop();
                result=max(result,(s.empty()?i:i-1-s.top())*h[temp]);
            }
        }
        return result;
    }


int maximalRectangle(vector<vector<char> > &matrix) {
        
        
        int rows=matrix.size();
        int cols=0;
        if(rows!=0) 
         cols=matrix[0].size();
        
        if(rows==0 || cols==0)
            return 0;
        
        int result=0;
            
        for(int i=0;i<rows;i++){
            vector<int> h(cols,0);
            for(int j=0;j<cols;j++){ 
                int r=i;
                                 while(r>=0 && matrix[r][j] == '1' ){  
                    h[j]++;
                    r--;
                }
            }
            result=max(result,largeRectangleArea(h));
        }
        return result;
    }  
   

int main()
{ 
    int n,m;
    cin>>n>>m;
    vector<vector<char> >matrix(n,vector<char>(m,0));

    for(int i=0;i<n;i++)
    {
      for(int j=0;j<m;j++)
      {
         char ch;cin>>ch;
         matrix[i][j]=ch;

      }
    }
    cout<<maximalRectangle(matrix);

    
   
    return 0;
}
