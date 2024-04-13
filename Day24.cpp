// Company Tags: Amazon, Adobe, Microsoft, Morgan Stanley, Samsung, Snapdeal, Times Internet

// Go wherever the unsorted subarray/half because the minimum element is always there
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] > nums[right]) { // go right
                left = mid + 1;  // no need to include mid
            } else {
                right = mid;  // include mid
            }
        }

        return nums[right];
    }
};