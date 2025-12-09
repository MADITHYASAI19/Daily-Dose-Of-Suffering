class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        long long count = 0;
        long long MOD = 1e9 + 7;
        int n = nums.size();

       
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                for(int k = j + 1; k < n; k++) {

                    
                    if(nums[i] == nums[j] * 2 && nums[k] == nums[j] * 2) {
                        count = (count + 1) % MOD;
                    }
                }
            }
        }

        return count;
    }
};
