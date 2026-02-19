class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int val=0,c=0,i;
        if(nums.size()==0)
                return 0;
        for(i=0;i<nums.size()-1;i++){
            if(abs(nums[i+1]-nums[i])==1){
                c++;
                val=max(val,c);
            }
            else if(nums[i+1]==nums[i])
                continue;
            else 
                c=0;
        }
    
    return val+1;
    }
};