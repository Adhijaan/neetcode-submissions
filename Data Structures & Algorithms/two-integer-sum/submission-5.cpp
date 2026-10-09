class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> num_map;
        int n = nums.size();
        for(int i = 0; i<n; ++i){
            const auto& iter = num_map.find(target - nums[i]);
            if(iter!=num_map.end()){
                return iter->second <= i
                ? vector<int>{iter->second,i}
                : vector<int>{i, iter->second};
            }
            num_map[nums[i]]=i;
        }
        return nums;
    }
};
