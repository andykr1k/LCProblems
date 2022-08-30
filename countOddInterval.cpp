class Solution
{
public:
    int countOdds(int low, int high)
    {
        int i = high - low;
        if (high % 2 == 1 || low % 2 == 1)
        {
            return (((high - low) / 2) + 1);
        }
        else
        {
            return ((high - low) / 2);
        }
    }
};