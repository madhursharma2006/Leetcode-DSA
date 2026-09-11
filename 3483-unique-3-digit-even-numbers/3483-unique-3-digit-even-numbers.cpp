class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int n=digits.size();
        // set<int>ans;
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         for(int k=0;k<n;k++){
        //             if(i==j || i==k || k==j) continue;
        //             if(digits[k]%2!=0) continue;
        //             if(digits[i]==0) continue;
        //             int number=digits[i]*100+digits[j]*10+digits[k];
        //             ans.insert(number);
        //         }
        //     }
        // }
        // return ans.size();
        vector<int>freq(10,0);
        int count=0;
        for(int x:digits) freq[x]++;
        for(int i=1;i<=9;i++){
            for(int j=0;j<=9;j++){
                for(int k=0;k<=8;k+=2){
                    freq[i]--;
                    freq[j]--;
                    freq[k]--;
                    if(freq[i]>=0 && freq[j]>=0 && freq[k]>=0) count++;
                    freq[i]++;
                    freq[j]++;
                    freq[k]++;
                }
            }
        }
        return count;
    }
};