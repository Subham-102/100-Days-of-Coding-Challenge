class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>s(nums.begin(),nums.end());
        nums.clear();
        for(auto r : s)
            nums.push_back(r);

        if(nums.size() == 1) return 1;
        else if (nums.size() == 0) return 0;
        int count = 1, maxi = -1;
        int i = 0, j = 1;
        while(j  < nums.size()){
            if(nums[j] - nums[i] == 1) 
            {
                count++;
            }
            else{
                count = 1;
            }
            maxi = max(maxi,count);
            i = j; j++;
        }
        return maxi;
    }
};