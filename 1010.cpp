class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int freq[60] = {0}; 
        int count = 0;

        for (int t : time) {
            int r = t % 60;
            int complement = (60 - r) % 60;

            count += freq[complement];

            freq[r]++;
        }

        return count;
    }
};
