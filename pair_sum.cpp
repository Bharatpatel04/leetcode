#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &a, int k){
  
    vector<vector<int>> ans;
    int n=a.size();
   sort(a.begin(),a.end());
     for(int i=0;i<n;i++)
      
       
    {
         for(int j=i+1;j<n;j++)
       {    if(a[i]+a[j]==k)
          {
                vector<int> temp;
                 temp.push_back(a[i]);
                  temp.push_back(a[j]);
                 ans.push_back(temp);
              
          }
       }
          
            
      }  
    return ans;
}
