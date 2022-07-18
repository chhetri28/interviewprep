class Solution {
public:
    int minPairSum(vector<int>& nums) {
        //simply taking small and large element together and checking for max
        int res=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()/2;i++){
            int pairsum=nums[i]+nums[nums.size()-1-i];
            res=max(res,pairsum);
        }
        return res;
    }
};