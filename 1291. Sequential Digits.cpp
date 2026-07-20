class Solution {
public:
    vector<int> sequentialDigits(int low, int high) 
    {
        vector<int> result;
        string digits = "123456789";
        
        for (int i = 2; i <= 9; i++) 
        {
            for (int j = 0; j <= 9 - i; j++) 
            {
                int num = stoi(digits.substr(j, i));
                if (num >= low && num <= high) 
                {
                    result.push_back(num);
                }
            }
        }
        
        sort(result.begin(), result.end());
        return result;
    }
};
