class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int a=original;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a){
                a =a *2;
                i=-1;
            }
            
        }
        return a;

    }
};
