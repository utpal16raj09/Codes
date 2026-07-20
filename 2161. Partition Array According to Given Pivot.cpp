class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0;
        int right = n - 1;
        
        vector<int> less, equal, greater;
        
        for (int num : nums) 
        {
            if (num < pivot) 
            {
                less.push_back(num);
            } 
            else if (num == pivot) 
            {
                equal.push_back(num);
            } 
            else 
            {
                greater.push_back(num);
            }
        }
        
        int idx = 0;
        for (int num : less) 
        {
            result[idx++] = num;
        }
        for (int num : equal) 
        {
            result[idx++] = num;
        }
        for (int num : greater) 
        {
            result[idx++] = num;
        }
        
        return result;
    }
};
