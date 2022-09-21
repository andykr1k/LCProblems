#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> out;
        for (int j = 0; j < nums.size() - 1; j++)
        {
            for (int i = j + 1; i < nums.size(); i++)
            {
                if (nums.at(j) + nums.at(i) == target)
                {
                    out.push_back(j);
                    out.push_back(i);
                    return out;
                }
            }
        }
        return out;
    }
};

// Efficient

/*
Loop through array nums
Calculate diff from target and element
Find diff in map
Store values with index in map
return vector
*/
