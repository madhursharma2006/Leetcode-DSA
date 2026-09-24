class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            int key=nums[i];
            while(key>0){
                sum+=key%10;
                key/=10;
            }
            if(sum==i) return i;
        }
        return -1;
        
    }
};