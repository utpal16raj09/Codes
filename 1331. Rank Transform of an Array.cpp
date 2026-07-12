class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) 
    {
        if (arr.empty()) 
            return {};
        
        set<int> unique(arr.begin(), arr.end());
        unordered_map<int, int> rank;
        int r = 1;
        
        for (int x : unique) 
        {
            rank[x] = r++;
        }
        
        for (int &x : arr) 
        {
            x = rank[x];
        
        }
        return arr;
    }
};
