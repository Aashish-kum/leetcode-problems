class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int max_value = 0;
        for(int i = 0; i < nums.size(); i++){
            int min_value = *min_element(nums.begin()+i, nums.end());
            if(max_value < nums[i]){
                max_value = nums[i];
            }
            if(max_value - min_value <= k){
                return i;
            }
        }
        return -1;
    }
};