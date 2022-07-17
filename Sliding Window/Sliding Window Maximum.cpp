class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int>res;
        deque<int>dq;
        int i=0,j=0;
        while(j<nums.size()){
            if(dq.size()==0) dq.push_back(nums[i]);
            else{
                while(dq.back()<nums[j] and dq.size()>0){
                    dq.pop_back();
                }
                dq.push_back(nums[j]);
            }
            
            if(j-i+1 < k) j++;
            else if(j-i+1==k){
                res.push_back(dq.front());
                if(nums[i]==dq.front()){
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }
        return res;
    }
};