#include <bits/stdc++.h>
#include <stack>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        vector<int> sorted = nums;
        stack<int> miss;
        sort(sorted.begin(), sorted.end());
        
        for ( auto x: sorted){
            if (miss.empty()){
                miss.push(sorted[x]);
            } else {
                if (miss.top() + 1 != sorted[x]){
                    return miss.top() + 1;
                } else {
                    miss.push(sorted[x]);
                }
            }
        }
        
        return miss.top() + 1;
    }
};