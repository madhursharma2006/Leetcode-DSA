class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int n=nums.size();
        // int j=0;
        // for(int i=1;i<n;i++){
        //     if(nums[i]!=nums[j]){
        //         j++;
        //         nums[j]=nums[i];
        //     }
        // }
        // return j+1;
        int n=nums.size();
        int i=0;
        int j=1;
        while(i<j && i<n && j<n){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;











        
    }
};