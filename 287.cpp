class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
     int n=nums.size();
        for(int i=0;i<n;i++){
            int c=0;
            if(nums[i]==nums[i+1]){
            return nums[i];  
            }
             
           
        }
        return -1;
         
    }
};
