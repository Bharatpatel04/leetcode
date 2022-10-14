class Solution {
public:
    vector<int> findDuplicates(vector<int>& a) {
        vector<int> ans;
        int n=a.size();
  int ma=0;
     for(int i=0;i<n;i++)
         ma=max(ma,a[i]);
       
       int *freq;
        freq=new int[ma+1] {0};
	
	for(int i=0;i<n;i++)
	{
	 freq[a[i]]++;
	    
	}
		for(int i=0;i<=ma;i++)
	{
	 if(freq[i]>1)
	   ans.push_back(i);
	    
	}
        return ans;
    }
};
