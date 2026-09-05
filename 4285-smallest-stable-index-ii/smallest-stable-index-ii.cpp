class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> right(n);
        right[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            right[i] = min(right[i + 1], nums[i]);
        }

        int max_value = 0;

        for (int i = 0; i < n; i++) {
            max_value = max(max_value, nums[i]);

            if (max_value - right[i] <= k) {
                return i;
            }
        }
        return -1;
    }
};