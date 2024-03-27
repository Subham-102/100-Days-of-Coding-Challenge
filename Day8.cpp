class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int num1 = INT_MIN;
        int num2 = INT_MIN;
        for(int num : nums)
        {
            if(num >= num1){
            num2 = num1;
            num1 = num; 
            }
            else if(num > num2)
            {
                num2 = num;
            }
        }
        return (num2-1)*(num1-1);
    }
};