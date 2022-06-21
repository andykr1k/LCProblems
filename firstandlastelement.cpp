///PROBLEM #34


#include <vector>
using namespace std;


//BRUTE FORCE
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        vector<int> finished;
        vector<int> fals = {-1,-1};
        bool res = false;
        for (int i = 0; i < nums.size(); i++){
            if (target == nums[i]){
                result.push_back(i);
                res = true;
            }
        }
        if (result.size()==1){
            result.push_back(result[0]);
        }
        if (result.size()>1){
            finished.push_back(result[0]);
            finished.push_back(result[result.size()-1]);
        }
        if (res){
            return finished;
        } else {
            return fals;
        }
        
    }
};