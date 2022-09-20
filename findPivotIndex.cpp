using namespace std;
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls = 0;
        int rs = 0;
        int sum = 0;
        for (int i = 0; i < nums.size(); i++){
            sum+=nums[i];
            if (i > 0){
                ls = sum - nums[i];
            }
            for (int j = nums.size() - 1; j > i; j--){
                rs+=nums[j];
            }
            if ( ls == rs ){
                return i;
            }
            rs = 0;
        }
        return -1;
    }
};