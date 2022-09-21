#include <vector>
using namespace std;
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        for (int i = 0; i < arr.size(); i++)
        {

            if (i != 0 && i != arr.size() - 1)
            {
                if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1])
                {
                    return i;
                }
            }
        }
        return 0;
    }
};