#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};