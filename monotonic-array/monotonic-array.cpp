class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if (nums.size() <= 1){return true;}

        int temp = nums[0];

        bool notFound = true;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] >= temp){temp = nums[i];}
            else{notFound = false;break;}
        }

        if (notFound){return true;}

        temp = nums[0];

        notFound = true;

        for (int i = 1; i < nums.size(); i++){
            if (nums[i] <= temp){temp = nums[i];}
            else{notFound = false;break;}
        }

        if (notFound){return true;}

        return false;
        
        
        
        
    }
};