class Solution {
public:
    int minimumPrefixLength(vector<int>& nums) {
        int l = nums.size();
        int n=0;
        for (int i;i<l-1;i++){
            if (nums[i]>=nums[i+1]) n=i+1;
        }
        return n;
    }
};