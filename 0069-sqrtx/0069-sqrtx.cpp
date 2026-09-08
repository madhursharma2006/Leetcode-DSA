class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x<2) return x;
        long long st=1,end=x;
        while(st<=end){
            long long mid=st+(end-st)/2;
            if(mid*mid<=x){
                ans=mid;
                st=mid+1;
            } else end=mid-1;
        }
        return ans;
        
    }
};