
class Solution {
public:
    long long sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;

        for (int k = 1; k <= n; k++) {
            if (n % k != 0) continue;

            bool valid = true;
            int prevMax = -1;

            for (int start = 0; start < n; start += k) {
                int end = start + k;
                int descents = 0;

                for (int j = start; j < end; j++) {
                    int next = (j + 1 == end) ? start : j + 1;

                    if (nums[j] > nums[next]) {
                        descents++;
                    }
                }

                if (descents > 1) {
                    valid = false;
                    break;
                }

                int mn = nums[start];
                int mx = nums[start];

                for (int j = start + 1; j < end; j++) {
                    mn = min(mn, nums[j]);
                    mx = max(mx, nums[j]);
                }

                if (start > 0 && prevMax > mn) {
                    valid = false;
                    break;
                }

                prevMax = mx;
            }

            if (valid) ans += k;
        }

        return ans;
    }
};
