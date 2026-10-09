
class Solution {
public:
    int minMoves(vector<int>& nums, int limit) {
        int n = nums.size();
        vector<int> diff(2 * limit + 2, 0);

        for (int i = 0; i < n / 2; i++) {
            int a = min(nums[i], nums[n - 1 - i]);
            int b = max(nums[i], nums[n - 1 - i]);
            int sum = a + b;

            int low = 1 + a;
            int high = limit + b;

            diff[2] += 2;
            diff[low]--;
            diff[sum]--;
            diff[sum + 1]++;
            diff[high + 1]++;
        }

        int ans = INT_MAX;
        int moves = 0;

        for (int target = 2; target <= 2 * limit; target++) {
            moves += diff[target];
            ans = min(ans, moves);
        }

        return ans;
    }
};
