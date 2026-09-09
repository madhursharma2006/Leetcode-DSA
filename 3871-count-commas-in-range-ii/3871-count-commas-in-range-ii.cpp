class Solution {
public:
    long long countCommas(long long n) {
        // int comma=1;
        // long long lower=1000;
        // long long ans=0;
        // while(lower<=n){
        //     long long upper=lower*1000-1;
        //     if(upper>n) upper=n;
        //     long long countdigit=upper-lower+1;
        //     ans+=(countdigit*comma);
        //     lower=lower*1000;
        //     comma++;

        // }
        // return ans;
        long long start=1000;
        long long ans=0;
        while(start<=n){
            ans+=n-start+1;
            start*=1000;
        }
        return ans;
        
    }
};