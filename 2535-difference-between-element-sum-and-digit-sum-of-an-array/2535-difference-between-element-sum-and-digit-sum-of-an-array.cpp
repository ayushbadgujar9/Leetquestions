class Solution {
public:
     int elsum(vector<int>& nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
     }
     int digsum(vector<int>& nums){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                int r=nums[i]%10;
                sum+=r;
                nums[i]/=10;
            }
        }
        return sum;
     }
    int differenceOfSum(vector<int>& nums) {
        int ans=abs(elsum(nums)-digsum(nums));
        return ans;
    }
};