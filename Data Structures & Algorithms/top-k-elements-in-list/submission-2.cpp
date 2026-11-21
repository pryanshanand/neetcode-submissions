class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp ;
        for(int i = 0 ; i < nums.size(); i++){
             mp[nums[i]]++;
        }
        vector<pair<int,int>> pre;
        for(auto x : mp){
            pre.push_back({x.second,x.first});
        }
        sort(pre.rbegin(), pre.rend());
        vector<int> ans;
        for(int i  = 0 ; i < k ; i++){
            ans.push_back(pre[i].second);
        }
        return ans;
    }
};
