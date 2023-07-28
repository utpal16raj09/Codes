#include <iostream>
#include <unordered_map>
class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
            int result = 0;
            int n = s.length();
            for (int i = 0; i < n; ++i) {
                int currV =roman[s[i]];
                if (i + 1 < n && roman[s[i+1]] > currV) {
                    result -= currV;
                }
                else { result += currV;}
            }
            return result;
        }
        int main() {
            std::string romanN = "XVI";
            int result = romanToInt(romanN);
            std::cout << " Roman numeral " << " is equal to " << result << std::endl;
            return 0;
        }        
};
