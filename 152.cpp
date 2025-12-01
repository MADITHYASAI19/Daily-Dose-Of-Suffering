class Solution {
public:
#define MN 0
#define MX 1
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> DP(n+2, vector<int>(2, 0));

        
        DP[0][MN] = nums[0];
        DP[0][MX] = nums[0];

       
        int ans = nums[0];
        for (int i = 1; i < n; i++) {
            DP[i][MN] = min ( DP[i-1][MN] * nums[i], DP[i-1][MX] * nums[i]);
            DP[i][MN] = min ( DP[i][MN], nums[i]);
            DP[i][MX] = max ( DP[i-1][MN] * nums[i], DP[i-1][MX] * nums[i]);
            DP[i][MX] = max ( DP[i][MX], nums[i]);
            ans = max(ans, max(DP[i][MN], DP[i][MX]));
            cout << ans << endl;
        }
        return ans;
    }
};
