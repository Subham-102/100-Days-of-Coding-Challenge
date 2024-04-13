class Solution {
public:
    int func(int ind,vector<int>& nums)
    {
        bool a=true,b=true;

        if(ind>0 && nums[ind-1]>=nums[ind])
        a=false;
        if(ind<nums.size()-1 && nums[ind+1]>=nums[ind])
        b=false;

        if(a && b)
        return 0;

        if(a && !b)
        return 1;

        return -1;
    }
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int h=nums.size()-1;

        while(l<=h)
        {
            int mid=(l+h)/2;
            int value=func(mid,nums);

            if(!value)
            return mid;

            if(value==1)
            l=mid+1;
            else
            h=mid-1;
        }

        return -1;
    }
};