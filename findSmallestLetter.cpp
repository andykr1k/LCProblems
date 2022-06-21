///PROBLEM #744


#include <vector>
using namespace std;


//BRUTE FORCE
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int lowest = 1000;
        int negLowest = 0;
        for (int i = 0; i < letters.size(); i++){
            if (letters[i] > target && letters[i] - target < lowest){
                lowest = letters[i] - target;
            }
            
            if (letters[i] < target && letters[i] - target < negLowest){
                negLowest = letters[i] - target;
            }
        }
        if (lowest < 100){
            return target + lowest;
        } else {
            return target + negLowest;
        }
    }
};