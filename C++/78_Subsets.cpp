void solve(int i,vector<int>& nums,vector<vector<int>>&ans,vector<int>v){
        if(i>=nums.size())
        {
            ans.push_back(v);
            return;
        }
            
            
        solve(i+1,nums,ans,v);
        
        int el=nums[i];
        v.push_back(el);
         solve(i+1,nums,ans,v);
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>v;
        int i=0;
        solve(0,nums,ans,v);
        sort(ans.begin(),ans.end());
        return ans;
        
    }
