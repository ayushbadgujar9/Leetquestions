class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
       vector<int>ans;
       int maxi = *max_element(nums.begin(), nums.end()); 
       int mini = *min_element(nums.begin(), nums.end());
       for(int i=mini+1;i<maxi;i++){
        int count=0;
        for(int j=0;j<nums.size();j++){
         if(nums[j]==i){
            count++;
            break;
         }
        }
        if(count==0){
            ans.push_back(i);
        }
       }
       return ans;
    }
};