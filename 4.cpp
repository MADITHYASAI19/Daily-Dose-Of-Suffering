class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int l=nums2.size();
        for(int i=0;i<l;i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        if(nums1.size()%2==1){
            return nums1[nums1.size()/2];
        }
        else{
            double d=nums1[(nums1.size()-1)/2]+nums1[((nums1.size()-1)/2)+1];
            return d/2;
        }
    }
};
