// https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/1927717988/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,ans=0;
        for(i=1;i<nums.size();i++){
            if(nums[i]!=nums[ans]){
                ans++;
                nums[ans]=nums[i];
            }
        }
        return ans+1;
    }
};