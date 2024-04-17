class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        std::ios::sync_with_stdio(0);
        std::cin.tie(0);

        int maxi = INT_MIN;
        int prefixSum = 0;

        for(int i=0; i<nums.size(); i++){
            prefixSum += nums[i];
            maxi = max(maxi, prefixSum);
            if(prefixSum < 0) prefixSum = 0;
        }
    return maxi;
    }
};