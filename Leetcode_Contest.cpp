// BIWEEKLY CONTEST 28


//price with special DISCOUNT PROBLEM

/*#include<bits/stdc++.h>
using namespace std;

void discount_price(vector<int>v)
{
	vector<int>v1;
	for(int i=0;i<v.size();++i)
	{
		int flag=0;
      for(int j=i+1;j<v.size();++j)
      {
      	if(v[j]<=v[i])
      	{
      		flag=1;
            int d=v[i]-v[j];
            v1.push_back(d);
            break;
      	}

      }
      if(flag==0)
      	{
      		v1.push_back(v[i]);
      	}

	}
	cout<<"[";
	for(int i=0;i<v1.size()-1;++i)
	{
		cout<<v1[i]<<",";
	}
	cout<<v1[v.size()-1]<<"]";
}

int main()
{
	vector<int>v;
	int n;cin>>n;
	while(n--)
	{
		int x;cin>>x;
		v.push_back(x);
	}
	discount_price(v);
    return 0;
}
*/
//SUBRECTANGLE QUERY

/*class SubrectangleQueries {
public:
    vector<vector<int>>a;
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        a=rectangle;
          
        
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        
    for(int i=row1;i<=row2;i++)
    {
        for(int j=col1;j<=col2;j++)
        {
            a[i][j]=newValue;
        }
    }
    }
    
    int getValue(int row, int col) {
        
         return a[row][col];
        
    }
};*/

// two NON-OVERLAPPING SUBARRAY each with taregt sum

/*#include<bits/stdc++.h>
using namespace std;

int NonOverlapingArr(vector<int>&v,int target)
{
	//creating a multimap
	multimap<int,pair<int,int>>mp;  //multimap is always sorted by deafult

	int start=0,end=0,sum=0,len=0;
	for(int i=0;i<v.size();++i)
	{
		sum+=v[i];
		len++;
		if(sum>target)  //if sum greater than target
		{
			while(sum>target)//untill sum larger than target
			{
              sum-=v[start];
              start++;
              len--;
			}
		}
		if(sum==target) //if sum==target
		{
			end=i;
			mp.insert(make_pair(len,make_pair(start,end)));
				sum-=v[start];
				start++;
				len--;

		}
	}
	int pre_start=0,pre_end=0,lenSum=0,count=0,pre_len=0;
	bool res=false;

	for(auto m:mp)
	{
		len=m.first;
		start=m.second.first;
		end=m.second.second;

		//overlapping case exclusion
		if(count!=0 && start<=pre_end && len<=pre_len)
		{
			lenSum-=pre_len;
			lenSum+=len;
			continue;
		}
		pre_len=len;
		pre_start=start;
		pre_end=end;
		lenSum+=len;
		count++;

		//picking first two enteries of multimap
		if(count==2)
		{
			res=true;
			break;
		}
	}
	//print result by the help of ternary operator
	return (res==false) ? -1: lenSum;



}

int main()
{
	int n;cin>>n;
	vector<int>v;
	while(n--)
	{
		int x;cin>>x;
		v.push_back(x);
	}
	int t;cin>>t;
	cout<<NonOverlapingArr(v,t);
	return 0;
}*/

//making file name unique
/*
class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        //ans subarry
        vector<string>v;
        //hashmap
        unordered_map<string,int>ump;
        for(int i=0;i<names.size();++i)
        {
            ump[names[i]]++;
            if( ump[names[i]]==1)//when any string arrives first time
            {
                v.push_back(names[i]);
            }
            else//if string comes multiple times
            {
                int k=ump[names[i]]-1;
                while(1)
                {
                    //+ do concatenation
                    string t=names[i]+"("+(to_string(k))+")";
                    
                    if(ump.find(t)!=ump.end())  //if cant reach end it means same string exist somewhere in map so this return true
                        k++;
                    else
                        break;
                }
                string s=names[i]+"("+(to_string(k))+")";
                //pushing in ans array
                v.push_back(s);
                //pushing in hashmap so that same element when come can be checked easily by  ump.find(t)!=ump.end
                ump[s]++;
                
            }
            
        }
        return v;
        
        
    }
};*/
//COUNT SUBMATRICES WITH ONES
   int numSubmat(vector<vector<int>>& mat)
	{
		int n=mat.size();
		int m=mat[0].size();
		int ar[n][m];
		
		// pre computation 
		for(int i=0;i<n;i++)
		{
			int c=0;
			for(int j=m-1;j>=0;j--)
			{
				if(mat[i][j])
				{
					c++;
				}
				else
				{
					c=0;
				}
				ar[i][j]=c;
			}
		}
		int ans=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
			// i, j is the top most left point of the rectangle which is fixed 
				int x=INT_MAX;
				for(int k=i;k<n;k++)
				{
					x=min(x,ar[k][j]);
					ans+=x;
				}
			}
		}
		return ans;
	}



