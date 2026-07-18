class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max = INT_MIN;
        int min = INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]) max = nums[i];
            if(min>nums[i]) min = nums[i];
        }
        int result = -1;
        for(int i=min;i>=1;i--){
            if(max%i==0 && min%i==0){
                result = i;
                break;
            }
        }
        return result;
    }
};