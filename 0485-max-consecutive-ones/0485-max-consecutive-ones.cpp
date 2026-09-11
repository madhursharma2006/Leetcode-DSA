class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int maximum_count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count++;
            } else{
                maximum_count=max(maximum_count,count);
                count=0;
            }
        }
        return max(maximum_count,count);
        
    }
};