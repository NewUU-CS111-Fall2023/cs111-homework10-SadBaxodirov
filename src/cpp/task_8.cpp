/*
 * Author:
 * Date:
 * Name:
 */

class Problem8 {
public:
    bool partition(const vector<int>& nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }
        if (totalSum % 2 != 0) {
            return false;
        }
        int targetSum = totalSum / 2;
        int n = nums.size();
        vector<vector<bool>> dp(n + 1, vector<bool>(targetSum + 1, false));
        for (int i = 0; i <= n; ++i) {
            dp[i][0] = true;
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= targetSum; ++j) {
                dp[i][j] = dp[i - 1][j];
                if (j >= nums[i - 1]) {
                    dp[i][j] = dp[i][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }
        return dp[n][targetSum];
    }
};
