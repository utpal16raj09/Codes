#include <iostream>
#include <unordered_map>
class Solution {
public:
//Function to convert a Roman Numeral string into integer
    int romanToInt(string s) {
        //Create a map to stire the values of each Roman Numeral 
        std::unordered_map<char, int> roman = {
            {'I', 1}, {'V', 5}, {'X', 10},
            {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        
        //INitialize the variable to store the final integer value
            int result = 0;
        
        //Get the length of the Roman numeral string
            int n = s.length();
        
        //Loop through each charachter of the Roman Numeral string
            for (int i = 0; i < n; ++i) {

                // Get the value of current Roman numeral characyer using 'roman'
                int currV =roman[s[i]];

                //Check if current value is less than the value of the next Roman numeral char
                if (i + 1 < n && roman[s[i+1]] > currV) {

                    //If yes, subtract the current value from result otherwise add
                    result -= currV;
                }
                else { result += currV;}
            }
            return result;
        }
        int main() {
            std::string romanN = "XVI";
            int result = romanToInt(romanN);

            //Print the result 
            std::cout << " Roman numeral " << " is equal to " << result << std::endl;
            return 0;
        }        
};
