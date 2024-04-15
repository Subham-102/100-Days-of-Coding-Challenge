class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        uint32_t low = 0;
        uint32_t high = nums.size();
        while (low < high) {
            const uint32_t mid = low + ((high - low) >> 1);
            if (IsNumberOnTheRight(nums, mid)) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        return nums[low];
    }

    bool IsNumberOnTheRight(const vector<int>& nums, uint32_t mid) {
        const bool odd = mid % 2 == 1;
        
        if (mid + 1 >= nums.size() || mid - 1 < 0) {
            return false;
        }
        
        return odd ? (nums[mid] == nums[mid - 1]) : (nums[mid] == nums[mid + 1]);
    }
};