class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < nums.size(); i++){
             mp[nums[i]]++;
        }
        vector<vector<int>> pre;
        for(auto x : mp){
            pre.push_back({x.first,x.second});
        }
        sort(pre.begin(), pre.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] > b[1];
        });
        vector<int> ans;
        for(int i  = 0 ; i < k ; i++){
            ans.push_back(pre[i][0]);
        }
        return ans;
    }
};
