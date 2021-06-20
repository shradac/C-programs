class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s;
        vector<int>::iterator ip;
        ip =unique(nums.begin(), nums.end());
        nums.resize(distance(nums.begin(), ip));
        s=nums.size();
        return s;
    }
};
