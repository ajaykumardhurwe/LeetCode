class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          int f=-1,l=-1;
        int low=0,high=nums.size()-1;
        if(nums.size()==0)
            return {-1,-1};
         if(nums.size() == 1){
            if(nums[0] == target)   return {0,0};
            else    return {-1, -1};
        }
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                f=mid;
                high=mid-1;
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        low=0;high=nums.size()-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                l=mid;
                low=mid+1;
            }
            else if(nums[mid]>target)
                high=mid-1;
            else
                low=mid+1;
        }
        
        return {f,l};
        
    }
};