#include <vector>
using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int maxP = 0;
        int l = 0;
        int r = 1;

        while (r < prices.size())
        {
            if (prices[r] > prices[l])
            {
                if (maxP < prices[r] - prices[l])
                {
                    maxP = prices[r] - prices[l];
                }
            }
            else
            {
                l = r;
            }
            r++;
        }
        return (maxP);
    }
};