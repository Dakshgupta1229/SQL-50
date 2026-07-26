class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int first = nums[nums.size()-1];
        int second = nums[nums.size()-2];
        int third = nums[nums.size()-3];
        int product1 = first * second * third;
        int first2 = nums[0];
        int second2 = nums[1];
        int third2 = nums[nums.size()-1];
        int product2 = first2 * second2 * third2;
        return max(product1,product2);
    }
};